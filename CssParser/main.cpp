#include "CSSLex.h"
int main(){
	CSSLex *lex =new CSSLex();
	lex->SetBufferString("#dd{background:url(xxx}#do{display:none}#dx{display:inline}");
	lex->GetToken();
	lex->GetToken();
	lex->GetToken();
	lex->GetToken();
	lex->GetToken();
	lex->GetToken();
}