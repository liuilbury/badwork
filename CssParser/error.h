//
// Created by liulizhang on 2020/6/10.
//

#ifndef CSSPARSER__ERROR_H_
#define CSSPARSER__ERROR_H_
#include <string>
typedef enum css_error {
  CSS_OK               = 0,

  CSS_NOMEM            = 1,
  CSS_BADPARM          = 2,
  CSS_INVALID          = 3,
  CSS_FILENOTFOUND     = 4,
  CSS_NEEDDATA         = 5,
  CSS_BADCHARSET       = 6,
  CSS_EOF              = 7,
  CSS_IMPORTS_PENDING  = 8,
  CSS_PROPERTY_NOT_SET = 9
} css_error;
std::string css_error_to_string(css_error error);

#endif //CSSPARSER__ERROR_H_
