#!/bin/bash 

# SPDX-FileCopyrightText: 2024 Sekiguchi Tomoyuki
# SPDX-License-Identifier: BSD-3-Clause

INTFACT="./intfact"

run_test() {
  local input=$1
  local expected_output=$2

  echo "テスト中: $input"
  output=$($INTFACT $input)
  if [[ "$output" == *"$expected_output"* ]]; then
    echo "テスト成功"
    echo "テスト項目: $expected_output"
    echo "出力: $output"
  else
    echo "テスト失敗"
    echo "期待された出力: $expected_output"
    echo "実際の出力: $output"
  fi
  echo
}

run_test 20 "2.0が2個|3.0が0個|5.0が1個"
run_test 45 "3.0が2個|5.0が1個"
run_test 97 "97が1個"
run_test 100 "2.0が2個|3.0が0個|5.0が2個"
run_test 1 "入力された値は1です"
run_test 101 "*101以上の素数が含まれている可能性があります*"
run_test 102 "*101以上の素数が含まれている可能性があります*"
run_test 102 "17が1個|19が0個|23が0個"
run_test 33 "3.0が1個"
run_test 13 "13が1個"
run_test a "数値以外が入力されました"
run_test あ "数値以外が入力されました"

echo "テスト完了"

