#!/bin/bash

ng () {
	echo ${1}行目が違う
	res=1
}

res=0
a=山田
[ "$a" = 上だ ] || ng "$LINENO"
[ "$a" = 田 ] || ng "$LINENO"
exit "$res"
