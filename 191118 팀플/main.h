#ifndef __STDIO_H__ //__STDIO_H__라는 매크로가 정의되어있지 않으면
#define __STDIO_H__ //__STDIO_H__를 정의한다

#include <stdio.h> //stdio.h 헤더파일 선언한다 -> 중복선언방지를 위해서

#endif //ifndef 종료      #ifndef~#endif가 하나의 묶음

#ifndef __WINDOWS_H__
#define __WINDOWS_H__

#include <windows.h>

#endif

#ifndef __STDLIB_H__
#define __STDLIB_H__

#include <stdlib.h>

#endif

#ifndef _TIME_H__
#define _TIME_H__

#include  <time.h>

#endif
