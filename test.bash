#!/bin/bash 

# SPDX-FileCopyrightText: 2024 Sekiguchi Tomoyuki
# SPDX-License-Identifier: BSD-3-Clause

ng () {
	echo ${1}行目が違う
	res=1
}

res=0

### NORMAL input for plus ###
out=$(seq 5 | ./plus)
[ "${out}" = 15 ] || ng "$LINENO"
### NORMAL input for intfact ###
out=$(echo 20 | ./intfact)
[[ "$out" == *"2.0が2個|3.0が0個|5.0が1個"* ]] || ng "$LINENO"

out=$(echo 45 | ./intfact)
[[ "$out" == *"3.0が2個|5.0が1個"* ]] || ng "$LINENO"

out=$(echo 97 | ./intfact)
[[ "$out" == *"97が1個"* ]] || ng "$LINENO"

out=$(echo 100 | ./intfact)
[[ "$out" == *"2.0が2個|3.0が0個|5.0が2個"* ]] || ng "$LINENO"

out=$(echo 1 | ./intfact)
[[ "$out" == *"入力された値は1です"* ]]

out=$(echo 102 | ./intfact)
[[ "$out" == *"101以上の素数が含まれている可能性があります"* ]]

out=$(echo 102 | ./intfact)
[[ "$out" == *"17が1個|19が0個|23が0個"* ]]

out=$(echo a | ./intfact)
[[ "$out" == *"数値以外が入力されました"* ]]

out=$(echo あ | ./intfact)
[[ "$out" == *"数値以外が入力されました"* ]]
### STRANGE input for plus ###
out=$(echo あ | ./plus)
[ "$?" = 1 ] || ng "$LINENO"
[ "${out}" = "" ] || ng "$LINENO"

out=$(echo | ./plus)
[ "$?" = 1 ] || ng "$LINENO"
[ "${out}" = "" ] || ng "$LINENO"

### STRANGE input for intfact ###

[ "$res" = 0 ] && echo OK
exit "$res"
