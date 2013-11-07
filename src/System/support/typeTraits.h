#pragma once

/*********************************************************************************************************/
/*********************************************** TYPE TRAITS  ********************************************/
/*********************************************************************************************************/

/*
Dereferences the types for template arguments (i.e: List<Object*> is -> List<Object>)
*/
#define TypeArg(T)							typename ::__Internal__::TypeTrait<T, true>::Type
/*
Changes the type of a variable declaration:
	-If the type is a basic type, the type is dereferenced
	-If the type is not a basic type, the type is referenced with an *
*/
#define TypeDecl(T)							typename ::__Internal__::TypeTrait<T,false>::Type
/*
DEPRECATED: Declares a type as a boxed reference (Box<T>&)
*/
//#define BoxRef(T) typename ::__Internal__::Boxing<T, ::__Internal__::IsFundamentalType<T>::result, true>::Type
/*
Declares a type boxed using Box<T> format
*/
#define BoxDecl(T)							typename ::__Internal__::Boxing<T, ::__Internal__::IsFundamentalType<T>::result, false>::Type
/*
BOOLEAN: returns if it is a basic type or not
*/
#define IsBasic(T)							::__Internal__::IsFundamentalType<T>::result

/*********************************************************************************************************/
/***************************************** INCLUDE TEMPLATES  ********************************************/
/*********************************************************************************************************/

#include "internal/TypeRefs.h"
#include "internal/TypeTraits.h"