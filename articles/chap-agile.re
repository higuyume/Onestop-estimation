= アジャイルと見積もり @erukiti

#@# 他のアジャイラーのひと、PR出してくれてもいいのよ？

本章では皆さんも大好きなアジャイルにまつわる見積もりについて触れてみましょう。

アジャイルとは、顧客が本当に求めるものをコミュニケーション重視で素早く開発するスタイルのことです@<fn>{agility}。

//footnote[client][内製であれば顧客とは、プランナーや偉い人やディレクターなどになるでしょう。場合によっては自分たち主導で作ることもあります。]
//footnote[agility][agile（アジャイル）とは機敏な、素早くという意味の単語です。語形変化としてのagility（アジリティ）はよくゲームで見かける単語で、素早さ・機敏さを意味しますね。]

//table[agile-manifesto][アジャイルソフトウェア開発宣言]{
これらよりも	この価値観を優先する
-----------------------
プロセスやツール	個人と対話
包括的なドキュメント	動くソフトウェア
契約交渉	顧客との協調
計画に従うこと	変化への対応
//}

アジャイルソフトウェア開発宣言（アジャイルマニフェスト）@<fn>{agile-manifesto-url}とは、アジャイルの根底にある価値観です。

//footnote[agile-manifesto-url][@<href>{https://agilemanifesto.org/iso/ja/manifesto.html}]

やり方やツールにこだわるよりもコミュニケーションを重視し、ドキュメント整備に力を割くよりは、実際に動くソフトウェアを作ること、契約交渉をガチガチにやるよりは顧客と一緒にいいものを作ること、計画ベースではなく、世の中の状況に逐次対応することを優先します。

さて、本書のテーマである見積もりとアジャイルというのは切っても切り離せない関係にあります。どれだけ素早く顧客の求めるものを作り上げるか？というのがアジャイルの根幹にあるためです。

====[column] アジャイルとは手抜きではない

アジャイルに関しては色々と誤解も多く、手抜きを隠す言葉として使われたり、なんちゃってアジャイルなんかも蔓延していることにはご注意ください。

たとえばアジャイルでは設計をサボったり、ドキュメントをまったく書かないわけではありません。Excelドキュメントや、Excelにスクショ貼り付けのような非効率的なことを嫌いますが、効率的に必要最小限のドキュメントを書くことはとても大切です。

たとえばソースコードにドキュメントを埋め込むJavaDocやJSDocのような形式や、PlantUML, Mermaidなどを使ったテキスト表現可能な図、Markdownで書かれた文章などはアジャイル開発でも多用されます。

また、アジャイルは銀の弾丸ではありません。アジャイルプラクティスと呼ばれるさまざまなテクニックはありますが、テクニックはあくまで単なるテクニックです。

プロセスやツールに捕らわれてしまうとアジャイルとしての価値観を見失っているのだということを思い出しましょう。

====[/column]

== 技術的スパイク

見積もりをしたいけど、ある機能を実装するために必要な工程がまったく見えないこともあります。そんな時には、技術的スパイクと呼ばれるタスクを行います。

単に技術調査といってしまうと目的がぼやけるかもしれません。絶対に目的を見失ってはいけません。技術的スパイクは、あくまで作業工程を洗い出すことであり、そのための実験的な実装に限定しておきます。

スパイクではなるべく最小限のコードを書いて検証を行います。プロダクションコードと独立していることが望ましいです。

このスパイクは可能であれば、ブログに書くか、まとめて技術書典で同人誌として出すといいでしょう。

== バッファ

見積もりではよく「見積もった時間の3倍」みたいな法則がいわれます。これはある大きな案件を一人で処理するときならそういう見積もり方でもいいでしょう。

ただし、これをタスクの見積もりに適用すると途端に問題になります。タスクごとにバッファを設けると、そのバッファが蓄積して大きな誤差になるからです。

それよりはたとえば、タスク見積もりにはあまりバッファを設けず、イテレーションごとにバッファを用意するというやり方の方がお勧めです。ただしこれは心理安全性が保証されていることが重要です。

個々人の保身が始まるとどうしてもタスクごとのバッファを設けざるを得なくなるためです。

アジャイルは、個人の責任ではなく、チームの責任にすることがとても大切です。

バッファの考え方に関しては詳しくはエリヤフ・ゴールドラットの「クリティカルチェーン」を読むといいでしょう。

====[column] 制約条件の理論（TOC）およびリーン

TOCとは theory of constrains の略で、1984年にエリヤフ・ゴールドラットが提唱した、サプライチェーンでどうやって部品を供給すれば、もっとも全体最適ができるか？という理論です。

雑にいうと、ボトルネック以上の部品を倉庫にためておくのは害しかないので、ボトルネックに合わせてスループットを調整しろという考え方です。

TOCの本としては「ザ・ゴール」などのシリーズがありますがその中に「クリティカルチェーン」というTOCの考え方をスケジュール管理に応用したバージョンがあります。

リーンは同じ頃にMITで提唱された概念で、ルーツはトヨタのカンバン方式です。今の時代からは想像もつきませんが、当時の日本は意味不明なほどの生産性の高い国として認識されていたのです。

リーンもTOC同様に、ボトルネック以上の無駄をなくそうとする考え方です。

ちなみにこれらTOCやリーンは、アジャイルの源流でもあります。年々肥大化し続けるソフトウェア開発をどうやって素早くするか？無駄をなくすか？を実現するためにTOCやリーンの考え方を導入しています。

アジャイルの正体を知りたい人は、TOCやリーンについて調べるとよいでしょう。

そもそもリーンはスタートアップをはじめとしたリーン開発として実際にソフトウェア開発でも重要な概念です。

====[/column]

== 不確実性のコーン

スティーブ・マコネルの提唱する「不確実性のコーン」とは、最初のうちは見積もり精度が悪く、作業が完了に近づけば近づくほど精度が上がることを指します。

たとえば1年単位のプロジェクトであれば、最初の計画策定の段階では1年と想定してても、4ヶ月で終わったり3年で終わったりする程度の精度でしか見積もれなかったりするかもしれません。

1年規模のプロジェクトであれば、やらなければならないことは、とてもとても大量にあるはずです。誤差は常に蓄積し続けます。そもそも最初の時点では情報のすべてがそろってるとは限りません。調査してはじめて分かること、実装してみてはじめて分かること、顧客が動かしてはじめて分かることがあります。1年後にはビジネスの状況が変化しているかもしれません。

しかし、あと残り3ヶ月という位になっていれば、残っている作業の見積もり精度はかなり上がっていることでしょう。見落としも減って、不確定だったことが確定しているはずだからです。

長期の超正確な見積もりというのはよほど堅実な業界ならともかく、基本的にはできません。変動の激しいビジネスシーンではちょっとしたことで、あっという間に技術が進歩してしまったり@<fn>{advance-tech}、人の好みが変わったりします。

//footnote[advance-tech][ここ最近は毎年のように色々なジャンルの技術で、極端なまでの進化を見せることがあります。技術の進化は今後も途切れることはあり得ません。]

では、1年規模のプロジェクトの見積もりに1ヶ月とか費やしますか？机上の空論で見積もり続ける位なら、プロトタイプを作ったりした方が進む可能性は高いでしょう。どうしてもコストがかかりすぎるとか、よほどの理由があれば見積もりに1ヶ月とか、あるいはそれ以上の期間を費やしてもいいのかもしれません。

さて、1年のプロジェクトと3ヶ月のプロジェクトなら、3ヶ月のプロジェクトの方が見積もり精度は高いはずです。見積もらなければならない要素が少なくなるからです。

さらにいえば3ヶ月のプロジェクトも2週間ごとに順次作っていけば、さらに堅実に進められるのではないでしょうか？

== イテレーション

アジャイル開発では素早くサイクルを回すことを重要視します。

このサイクルはイテレーション（繰り返し）と呼ばれ、短ければ1週間、普通は2週間程度で、どれだけ長くてもせいぜい1ヶ月ごとに行われます。

イテレーションごとに、顧客にとって何か価値のあるものを成果として見せます。短期間で成果を見せるのはムズカシイでしょうか？UIであれば実際に動くモック、ある1つの機能、そういったものなら出せるとは思いませんか？

アジャイルに限らずエンジニアなら分割統治の原則、つまり大きな問題は小さな問題に分割するという考え方を知っているはずです。

実際のところ、大半の顧客は実際に動いているものをみて「うーん、これじゃないんだよなー」とか言い出すものです。なら、実際に動いてるものを見せるのは早ければ早いほどよいのです。

====[column] タイムボックス

アジャイルでは、イテレーションに限らず、期間を区切るタイムボックスという考え方を多用します。

たとえば、アジャイルというわけではないですが、アジャイル開発者が好むテクニックに、ポモドーロタイマーテクニックというものがあります。25分作業 + 5分休憩 を1ポモドーロ。3ポモドーロしたら長めの休憩（30分くらい）を入れるというやりかたです。

この時間設定は色々な流儀があります。ただ、やってみるとわかりますが、これはかなり疲れます。8ポモドーロもやればそれなりに疲労がたまることが分かるはずです。それくらい集中できるテクニックなのです。

またタイムボックスはハマり防止にもなります。作業を開始してみたものの、思ったよりもやることが増える、やり方が分からなくて手が止まる、そういったハマり状態が発生することもあるでしょう。

時間をあらかじめ区切る、あるいは一定のタイミングで振り返りをするようにすればハマりにくくなります。たとえば「1ポモドーロでここまでできなければやり方を見直す」とか「2ポモドーロでこの技術調査が完了しなければ別のタスクに切り替える」などです。

個人的な感覚として、同じ作業を連続して続けると、自分の生産性のスループットが落ちることがあると思っています。場合によっては過集中のように、数時間ぶっ続けですごいモノを書ける（よく神が降りてくるといわれる）こともありますが、使用する脳の領域が偏り続けると、脳のモードが固定化して、作業効率が落ちることがあると感じます。

これらは筆者の経験則なので正しいという確証はありませんが、連続で詰めてやる方がいいか、それともちゃんと切り替えてやるべきかは、ご自身にあったやり方を模索してみてもいいと思います。

それに長時間座りっぱなしは不健康のもとで寿命が縮むという話もよく聞きます。

====[/column]

== ベロシティを使った見積もり

イテレーションは見積もりに役立ちます。

あるアジャイルチームで1イテレーションの間にどれくらいの成果が出たのか、何回か繰り返せば感覚がつかめてくるでしょう。これはベロシティ（速さ）と呼ばれます。

たとえば2週間で10個の小さな機能を実装しリリースしたとします。リリースまでに必要だった時間の合計をベロシティと見なすことができます。これはある意味わかりやすい指標でしょう。あるチームが2週間でできる作業は合計時間でn時間相当である、みたいなものです。

チームメンバー全員が2週間（10営業日）の8時間フルで稼働できるか？というとそんなことは絶対にあり得ません。さまざまな「割り込み」によって作業が中断させられることもあります。エンジニアリングのように高度な集中を必要とする作業では、中断は効率を落とす害悪となりえます。無駄な会議に巻き込まれることもあるでしょう。

ベロシティは、イテレーションの間に実質こなせる作業量のことなのです。

ちなみにベロシティ算出では、作業時間を使わないやり方もあります。それは時間ではなくサイズ感（相対値）をポイント化するというものです。

たとえば、軽い作業を1ポイントとします。その2倍くらいなら2ポイント。3倍くらいなら3ポイント、10倍くらいの重さなら10ポイント、逆に軽すぎる作業であれば0.5ポイントとかです。

このときポイントは細かく分類する必要はありません。1と2、1と3くらいは違いとしては大きいですが、3と4の違いを気にするべきではありません。そこでフィボナッチ数列を使うというアイデアもあります。

またアジャイルチームであれば、ポイントをみんなの共通認識にするためにプランニングポーカーをするといいでしょう。

ベロシティ算出で2種類の手法を提示しました。なるべくなら実時間ベースではなくポイントベースでやる方をお勧めします。理由としては実時間ベースでは色々と誤解を招きやすいこと、個々人の状態や外的要因に左右されやすいという問題があるためです。

また、プランニングポーカーのように作業をポイント化する癖を付けておけば、脳内の見積もり精度が上がるという利点があります。

====[column] 見積もりのトレードオフを制する

無限の時間があれば誰でもどんなものでも作ることもできるでしょう、きっと。現実として人間の時間は有限です。

 * 期間
 * 実現する機能
 * クォリティ
 * 予算

現実問題として、大量の機能を最高の品質で短期間で低予算で作れるわけはありません。必ずどれかを犠牲にすることになるでしょう。

これらは相反するところのあるパラメータです。少なくとも全部を満たすことは不可能であると、ステークホルダーに認識させる必要があります。

期間というのは、アジャイルではイテレーション単位で考えるため、固定と考えてもいいでしょう。ただし、イテレーションの集合として、いつまでに何をするのか？という中・長期計画になると話はもちろんかわります。

どうしても無理をいわれるようであれば予算（人員）を増やしてもらう必要があるでしょう。でも、多くのケースにおいて予算は動かせないパラメータです。

だとしたらあとは、動かせるものは、実現する機能かクォリティです。

クォリティを犠牲にした時、火の粉はあなたのチームに飛んでくるかもしれません。クォリティが低いことを責められる、自責の念に駆られる、モチベーションが探すなど。

ただし「クォリティ」といっても複数の意味合いがあります。先を見越しためっちゃすごいライブラリを作るというのは、クォリティの高い仕事かもしれませんが、それはほんとに今必要ですか？

イテレーションごとに何を、どれくらいのクォリティで実現するのか？それを考えるというのが実行計画と、その作業時間の見積もりになります。

ちなみにある期間でどこまでの問題を解決するか？をアジャイルではよく「スコープ」と呼びます。変数のスコープと同じようなものですね。

4つのパラメータに関して、どうしても無理なことをいわれる場合は、「ワンストップ！転職」本を読んでみるべきかもしれません。

====[/column]
