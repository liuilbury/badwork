//
// Created by liulizhang on 2020/6/11.
//

#ifndef CSSPARSER__CSSPARSE_H_
#define CSSPARSER__CSSPARSE_H_
#include "CSSLex.h"
#include <vector>
#include <stack>
class CSSParse {
  CSSLex lexer;        /**< The lexer to use */

  CSSToken *pushback;    /**< Push back buffer */
  std::stack<int>state;
  std::vector<CSSToken> tokens;    /**< Vector of pending tokens */


  bool last_was_ws;        /**< Last token was whitespace */

  void getToken(CSSToken **token) {
	if (pushback != nullptr) {
	  *token = pushback;
	  pushback = NULL;
	} else {
	  CSSToken *t;
	  lexer.GetToken();
	  while (last_was_ws && t->type == CSS_TOKEN_S) {
		lexer.GetToken();
	  }
	  if (t->type < CSS_TOKEN_LAST_INTERN && t->data != "") {
		/* Insert CSSToken text into the dictionary */

		t->idata+=t->data;
	  } else {
		t->idata = "";
	  }
	  *token = t;
	}
	tokens.push_back(**token);
	last_was_ws = ((*token)->type == CSS_TOKEN_S);
  }
};

#endif //CSSPARSER__CSSPARSE_H_
