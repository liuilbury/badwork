//
// Created by liulizhang on 2020/6/10.
//

#include "error.h"

std::string css_error_to_string(css_error error){
  std::string result;

  switch (error) {
	case CSS_OK:
	  result = "No error";
	  break;
	case CSS_NOMEM:
	  result = "Insufficient memory";
	  break;
	case CSS_BADPARM:
	  result = "Bad parameter";
	  break;
	case CSS_INVALID:
	  result = "Invalid input";
	  break;
	case CSS_FILENOTFOUND:
	  result = "File not found";
	  break;
	case CSS_NEEDDATA:
	  result = "Insufficient data";
	  break;
	case CSS_BADCHARSET:
	  result = "BOM and @charset mismatch";
	  break;
	case CSS_EOF:
	  result = "EOF encountered";
	  break;
	case CSS_IMPORTS_PENDING:
	  result = "Imports pending";
	  break;
	case CSS_PROPERTY_NOT_SET:
	  result = "Property not set";
	  break;
  }

  return result;
}