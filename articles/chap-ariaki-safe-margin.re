= 工数見積もりと安全マージン

== はじめに

みなさんは作業工数を見積もる際に@<b>{安全マージン（バッファ）}をどの程度とられていますか？
見積もりの際には作業前に時間を予測しますから、完璧な精度で算出することは不可能です。
しかし、予測時間を超過すると納期遅延など大きな問題に発展する可能性がありますので、私たちはそうならないよう細心の注意を払い「実工数＜見積もり工数」となるよう調整しています。
見積もりの精度を上げるには一般的に作業を細分化して過去の実績をもとに算定しますが、それでも想定しきれない諸々の問題に対処するための余裕時間「安全マージン」を積み増します。
これをどの程度設定するのが適切かは場面によって大きく変わりますし、対外的に説明が難しい部分もあるため、難しい課題ではないでしょうか。
本章ではこの安全マージンについて私の体験談を元に解説し、@<br>{締切稼働}の作業にならないための知見として共有します。

== 安全マージンとは

=== 安全マージンを取る理由

想定外の問題によって@<b>{クリティカルパスが阻害される}可能性に対し、私たちはリスクヘッジの為に余裕を設定します。
安全マージンを検討する前に、リスクにはどのような種類があるのかを少し掘り下げましょう。

    * 未知の事象
    * 曖昧な事象
    * コミュニケーションコスト
    * など

==== 未知の事象

何においても「初めて」は想定できない部分が多くリスクを伴いますので、安全マージンが必要になります。
また「初めての顧客」については協力度や理解度などを推し量る事ができないためリスク因子となり得ます。

    * 初めての言語／フレームワーク
    * 初めてのミドルウェア／ＯＳ／製品
    * 初めての顧客
    * など

上記以外にも未確定の要求事項や対向仕様など「まだ決まっていない」事も大きなリスクです。
こういった初めての事象に対して、調査工数を設けたり、段階的な工数見積もりをするなどの工夫で精度を上げることができます。

==== 曖昧な事象

取り組む要件に曖昧な要素がある場合、それは大きなリスクをはらみます。
主に顧客（依頼側）と開発者が考えている内容に乖離がある場合に発生し得る問題で、後から作業段階で問題になる事も多いのではないでしょうか。
これに対して、工数見積もり時に作業範囲を明示したり、要件定義フェーズを別見積もりとするなどの工夫が必要です。

    * 顧客が業務を理解していない／不慣れ
    * 顧客が後から追加依頼しがち
    * 要求事項がゆるふわ系
    * など

==== コミュニケーションコスト

顧客によっては、言語や文化の違い、多忙などから、コミュニケーションが困難な場合があります。
この場合には相応のコミュニケーションコストが想定されますので、リスクヘッジが必要になります。
例えばオフショアで日本語コミュニケーションが難しい場合は何度も手戻りが発生する可能性を考慮するべきです。

    * タスクやチケットを処理してくれない
    * 言語的な障壁がある
    * 介在する人数が多い
    * 稟議が遅い
    * など

==== その他

その他にも、あなたの開発モチベーションによってもしかしたらコストが変わるかもしれません。
良い解決策が思いつきませんので、仕事に集中して頑張って下さい。

    * 体調が優れない
    * 最近モチベーションが低い
    * 報酬が安くてやる気が起きない
    * 面白いゲームを購入した
    * など

=== 受注者から見た安全マージン

これまで、開発者視点から安全マージンが必要な例を挙げました。
ではこのマージンは@<b>{誰が誰に対して}持っておくべきものでしょうか。
企業の受託開発では一般的に「開発者→マネージャー→営業→客先」のような構造になりますが、ここではどの部分にバッファを持つべきなのかを検討します。

通常、安全マージンは@<b>{それぞれの人がそれぞれの役割内で持っている}といえます。
それぞれ自身の責任範囲で納期を遅延させる事はできませんから、他者によって影響される部分には必ず上記のようなコストを想定するでしょう。
たとえば部下に調査をさせ、その回答を客先にメールで送信する場合、あなたはどのような判断をするでしょうか？
部下からは「今日中に回答します」と報告されたとしたら、恐らく早くとも「明日午前中に回答します」と連絡をするでしょう。
このように、関係者が多くなればなるほど、安全マージンは増えていく傾向があります。
コミュニケーションはコストですので、これが間違っている訳ではありません。

次に、確実に工数を推測できる単純作業や反復業務の場合、安全マージンをどのように考えればよいでしょう。
たとえば1時間あたり100枚入力可能な葉書を1000枚受注する場合は、10時間と回答できるでしょうか。
恐らくこういった場合にも安全マージンは必要になるでしょう。
往々にして「1人日＝1日間」として計算され、急な会議や差込業務などの悲劇によって計画が崩れてしまう場面を見かけます。
工数を日数ではなく作業可能時間にプロットするプロジェクトマネージャーが必要不可欠ですね。
また、1日あたりを6時間とか7時間とかで計算することで、こういった単純作業にも安全マージンを持たせておく事ができます。

=== 発注者から見た安全マージン

前項では安全マージンが受注者側の「心理的安全」に必要ということを説明しましたが、では発注者側は@<b>{どの程度が安全マージンなのか}わからない事は健全でしょうか？
私は、ある程度は許容されるべきであると考えます。
発注者にとって納期からの遅延はビジネス上致命的となる可能性があります。
必要以上に買いたたいて結果として納期を落としてしまったり、受注者に断れるのは健全とはいえません。
見積もりを確認する際は、ある程度安全マージンを許容したうえで中身を精査し、もし高いと感じるようであればどれ位の安全率なのかを一度聞いてみるのがよいでしょう。
親切な受注者であれば項目ごとにどんな理由で安全マージンを乗せているのかを教えてもらえ、発注者であるあなたの協力・改善によって見積もり結果が変わるかもしれません。

=== 安全マージンと利益

-- TODO --

== 安全マージンと納期

=== 安全マージンによる心理的怠慢

さて、そろそろ本題に入りましょう。
あなたがこれから取り組む業務に安全マージンを40時間設定した場合、どういう行動を取るでしょうか？
皆さんもおそらく多かれ少なかれサボるはずですし、都合の良い他のタスクを優先させるかもしれません。
私は夏休みを最終日にまとめてやるタイプでしたので、とにかくギリギリまでサボろうとしがちでした。
そんな私と同じように安全マージンを持つ事によって気持ちがゆるみ、締切駆動になりがちな方に、次のようなアイデアを提案します。

==== 余裕を作らない

もし自身がサボりがちだと思うのであれば、作業に余裕を作らない事が肝要です。
工数を見積もる際に「自分用の見積もり」と「自分以外に提示する見積もり」を分けて考えるのはいかがでしょうか。
そうすることで、あなたは作業を自分用の見積もりに記載された計画通り作業をする事ができます。
余裕があるというのは心理的安全性を担保するものであって、作業を後伸ばしにする理由にしてはなりません。

==== タスクを細分化する

あなたが工数を決める際に、タスクを可能な限り細分化し、そして優先度を決めます。
取り組むべき小さなタスクが明確になっていれば心理的ハードルが下がり、容易に次のタスクに移る事ができるでしょう。
最近はカンバン等の仕組みによってすっかりこの方法が定着してきました。
目標となるタスクを切らさないよう注意することで、全体の遅延は減っていくはずです。

=== 安全マージンと利益

あなたが安全マージンを消費しきらずに作業を完遂した場合、いったい誰が利益を得るでしょうか。
実はここで「利益」と考える時点で、工数見積もりの本質的な意味合いが崩れています。
安全マージンとは安全に対する余裕時間であり、早期完了したからといってすべてを利益とするのは得策ではありません。
例えば、リファクタリングやドキュメンテーション等の改善業務に充てる事ができるのであれば、双方にとって素晴らしい過ごし方です。
このように、早期完了した場合にはあなたの利益（評価）が最大化する方法について検討される事をおすすめします。

== まとめ

この章では、私が安全マージンについてどのように考えるかを解説しました。
納期を守るためには安全マージンを取ることは必要不可欠です。
そしてそれが作業を放置してしまう原因とならないよう自戒を込めています。
この本を手にとる皆さんが同じような経験をされないことを祈ります。
