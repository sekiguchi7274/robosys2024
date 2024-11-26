# robosys2024
ロボットシステム学、授業用
[test]
(.github/workflows/test.yml/badge.svg)
# plusコマンド


標準入力された数字を加算するコマンド

## 必要なソフトウェア
- Python
  - テスト済みバージョン:3.7~3.11

## テスト環境
- Ubuntu 24.10 LTS

# intfactコマンド


標準入力された整数を97までの素数で素因数分解するコマンド
## 導入方法
- 以下のコマンドをホームディレクトリで実行してください


```
git clone git@github.com:sekiguchi7274/robosys2024.git
```


## 使用方法
- robosys2024ディレクトリに移動してから`./intfact`を実行してください


```
cd robossys2024
```
 

##使用例
- 45を素因数分解


```
echo 45 | ./intfact
```


```
### 実行結果 ###
2.0が0個|3.0が2個|5.0が1個|7.0が0個|11が0個|13が0個|17が0個|19が0個|23が0個|29が0個|31が0個|37が0個|41が0個|43が0個|47が0個|53が0個|59が0個|61が0個|67が0個|71が0個|73が0個|79が0個|83が0 個|87が0個|89が0個|91が0個|97が0個
```


- 102を素因数分解[^1]


```
echo 102 | ./intfact
```


```
### 実行結果 ###
*101以上の素数が含まれている可能性があります*
2.0が1個|3.0が1個|5.0が0個|7.0が0個|11が0個|13が0個|17が1個|19が0個|23が0個|29が0個|31が0個|37が0個|41が0個|43が0個|47が0個|53が0個|59が0個|61が0個|67が0個|71が0個|73が0個|79が0個|83が0 個|87が0個|89が0個|91が0個|97が0個
```


- 1から5までの和の素因数分解


```
seq 5 | ./intfact
```


```
### 実行結果 ###
2.0が0個|3.0が1個|5.0が1個|7.0が0個|11が0個|13が0個|17が0個|19が0個|23が0個|29が0個|31が0個|37が0個|41が0個|43が0個|47が0個|53が0個|59が0個|61が0個|67が0個|71が0個|73が0個|79が0個|83が0 個|87が0個|89が0個|91が0個|97が0個
```


- 1から15までの和の素因数分解[^2]


```
seq 15 | ./intfact
```


```
### 実行結果 ###
*101以上の素数が含まれている可能性があります*
2.0が3個|3.0が1個|5.0が1個|7.0が0個|11が0個|13が0個|17が0個|19が0個|23が0個|29が0個|31が0個|37が0個|41が0個|43が0個|47が0個|53が0個|59が0個|61が0個|67が0個|71が0個|73が0個|79が0個|83が0 個|87が0個|89が0個|91が0個|97が0個
```


- 注意
 - [^1] 101以上の数値が入力された場合、対応していない素数が含まれる可能性があるため、警告が出ます。
 - [^2] 結果が101以上となるコマンドが入力された場合も、警告が出ます。


## 必要なソフトウェア
- Python
  - テスト済みバージョン:3.7~3.11

## テスト環境
- Ubuntu 24.10 LTS

## お世話になった参考資料
- [Markdown記法-書き方-見出し-表-リンク-画像-文字色など]
(https://help.notepm.jp/hc/ja/articles/17267176922393-Markdown%E8%A8%98%E6%B3%95-%E6%9B%B8%E3%81%8D%E6%96%B9-%E8%A6%8B%E5%87%BA%E3%81%97-%E8%A1%A8-%E3%83%AA%E3%83%B3%E3%82%AF-%E7%94%BB%E5%83%8F-%E6%96%87%E5%AD%97%E8%89%B2%E3%81%AA%E3%81%A9)
- [Markdown記法 チートシート]
(https://qiita.com/Qiita/items/c686397e4a0f4f11683d)
- [Pythonの例外処理（try-except）について解説します！]
(https://techplay.jp/column/1831)
- [Pythonのrstrip()関数について現役エンジニアが解説【初心者向け】]
(https://magazine.techacademy.jp/magazine/33799)


このソフトウェアパッケージは、3条項BSDライセンスの下、再頒布および使用が許可されます。

©　2024 Tomoyuki Sekiguchi
