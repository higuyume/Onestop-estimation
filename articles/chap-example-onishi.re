= フリーランスチームリーダーとしての見積もり失敗談＠オーニシ

　何年も前になりますが少人数のフリーランスチームで案件を受注した際の失敗談をお話し致します。
見積もり単体というよりマネジメント全体での失敗なのですが、実際に見積もりが大きくずれてしまったことにより何が起きたか、それにどう対処し、どのような結果を招いたか、
そしてその状況に置いて私はどうすべきだったかを順を追ってお話し致します。

== 案件

　私はあるオフ会で出会ったSさんという人物から、アメーバブログで書いている自分のブログを独自ドメインに移行するという案件を受注しました。
私だけでも1～2日あればこなせる案件だったのですが、当時私はIという人物と共同事業を立ち上げており、この案件を私だけで請け負うかIとの共同事業の一環として請け負うか悩みました。

　共同事業として請け負えば私だけでは実装の難しい機能を作ることが可能ですが、Iはきわめて飽き性で責任感に乏しかったため不安が残ります。共同事業自体も畳もうか迷っていたところでした。
そこでブログシステムとして私の使い慣れているWordPressを使い、Iにはスクリプトなりプラグインなりで機能実装してもらうという方法を考えました。
これなら最悪の場合としてIが開発を放棄しても最低限Sさんのブログ移行は完遂できます。

　Iにこの件を伝え、後日Sさんを含めた3人で話し合った結果、私とIの共同事業としてこの件を引き受けることとなりました。
この件は私の予想以上にIを刺激したらしく、IはWordPressではなく独自のブログシステムを開発することを提案します。セキュリティ的により強固なものが作れるというのです。
Sさんはそれほど急いでいるわけではなかったため特に反対しませんでしたが、私はこの件をそこまで大掛かりな開発にするつもりはなく、Iの完遂能力も不安でした。しかもIの言う開発期間見込みは甘すぎるように思えたのです。
しかしIを私よりも技術力が高いエンジニアとしてSさんに紹介してしまった以上、Iが大丈夫だという開発内容や期間に大々的に異議を唱えるわけにもいきません。
こうしてこの案件は「アメーバブログの独自ドメインブログへの移行」に「オリジナルブログシステムの開発」を含めた案件へと肥大しました。

== 要件定義

　我々の共同事業は私が責任者として資金提供、マーケティング、計画立案、営業、宣伝、マネジメントを担当し、Iが開発の主要部分を担当するというチーム編成となっていました。
そのため具体的な要件定義は私がSさんと話し合い、ある程度まとまった段階でIと技術的、リソース的な可不可や開発日程・期間を算出しました。

※住んでいる場所が遠方のため以降の打ち合わせは全てSkypeによるものです。
また、Iには「技術担当者は極力顧客との打ち合わせに直接参加さべきではない」というポリシーがあったため私が技術営業の役割も兼ねてやり取りを仲介しています。

　技術専門要員が加わったためSさんはいくつか追加機能を欲しましたが、ブログシステムを開発するとなるとそれだけでかなりの作業量になるため、
案件をまとめるためにも「ブログの移行」と「機能の追加」を別案件として分けることを了承してもらいました。
とはいえ元々のブログよりも不便になったり、これまで使っていた機能が使えなくなってしまうことは避ける必要があります。

　ブログデザインも必要です。WordPressであれば無料テーマから好きなものを選んでもらい多少修正することでとりあえずの体裁を整えることもできますが、独自のブログシステムを作るとなると自前で用意しなければいけません。
さらに管理画面の設計も必要です。

　数回の打ち合わせを経てなんとかSさんの要望と我々のリソースをすり合わせ、削れる部分（管理画面のカッコよさなど）は削ることで要件定義は完了しました。

== 費用見積もり

　費用見積もりはそれほど苦戦しませんでした。とりあえずの制作物は独自ドメインサイト1つですので費用はドメイン代とサーバー代くらいですし、ドメインはSさんが直接契約することになったためです。
しかもこの案件はもともとSさんの活動に私が興味を惹かれたもので、Sさんからは直接代金を頂かず我々のサービスを宣伝してもらうこととなっていたため報酬計算も必要ありません。

== 工数見積もり

　前述の内容に基づき具体的な作業工数を算出していきます。今回のケースでは報酬があらかじめ決まっているため一定以上の工数をかけるわけにはいきません。
要件定義の時点で工数が増えすぎないよう気を配りましたが多少の調整が必要になりました。

　少々ややこしい話になるのですが独自のブログシステムを開発することになったため、私とIの間で今後このシステムを売り込んでいくことが決まっていました。
自分たちのサービス開発を兼ねるためSさんの件だけで採算を取る必要はないものの、もともとの案件であるSさんのブログ移行を遅らせすぎるわけにもいきません。

　具体的な工程をスケジュールに落とし込んでいきますがシステムの開発だけは明確に見積もることができません。
私もIも実際にブログシステムを作ったことはないため勉強期間を含めた概算を見積もることしかできないためです。
特に今回のケースではIが開発工程を全て担当したいという話になったため、Iがインフラ、サーバー、プログラミングなどの知識に基づいて工数を算出します。
使用するサービスや必要な作業の概要、スケジュールを算出したあと私と相談して最終決定となりますが、やはりIに開発を任せているため大丈夫だと言われれば信じるしかありません。
最終的に3か月でベータ版が完成し、その後テストを兼ねた実運用・修正を行い4か月程度で完全に納品できるという見積もりとなりました。

== 開発開始

　見積もりが完了しSさんにも了承を得ることができたため実際に開発を始めます。Iはシステムの開発に専念し、その間私とSさんでページデザインを考案します。
工数的に私の手が空いてしまうためフロントエンドだけでも私が担当することを提案したのですがIが1人で開発することにこだわったため、
空いた時間でSさんにSEOと基本的なHTMLの文法について教えつつ、それに基づいて移行する各記事を微修正することにしました。
Sさんに広告塔になってもらう以上、Sさんのブログが伸びるに越したことはないためです。

　私とSさんの作業はほぼ進捗どおりに進み、3か月後の定例会議を迎えました。
予定ではベータ版が完成する予定だったためここから管理画面の使い方の説明と実際の記事の移行、運用のテストを行う予定でしたがIの開発に遅れが生じていました。
遅延は1か月程度とのことだったためSさんに報告と謝罪をし、管理画面ができたら速やかに記事を移行できるよう、各記事のHTMLファイルをエディタで微修正して作成することにしました。

== 延期に次ぐ延期

　1か月後、再びIの開発遅延が報告されます。1度でも問題な納期遅れが2度目ともなると大問題です。
しかも相変わらず管理画面すらできていないためクライアントであるSさんが作業進捗を確認できるものが、各ページのHTMLファイルくらいしかないのです。
さすがのIもバツが悪そうにしているものの、もう少しあれば確実にできると言います。私にできることはSさんに頭を下げ、再びの延期を了承してもらうことだけでした。
2度目の延期にもかかわらずSさんは待ってくれることになりましたが、さらに3か月後には出演イベントが控えているためできればそれまでにはテストを完了しブログの移行を完了したいとのことでした。
念のためこのことをIに確認したところ、もうすぐテストが開始できるしあと3か月あれば微修正も含め確実に完了できると話しました。

　さらに1か月後の定例会議でIの口から信じられない言葉が発せられます。
「独自開発では間に合わないので工期をもう3か月伸ばすか、WordPressをベースにカスタマイズしてあと1か月程度でベータ版を仕上げるか選んでほしい」というのです。開いた口がふさがりません。
Sさんからはそれほど以降を急いでいるわけではないとは度々伺っていましたが、3度も納期を伸ばしてしかもトータルで元の予定の倍以上の工期がかかるなどとどんな顔で話せばいいのでしょうか。
しかも間に合うと約束したSさんの出演イベントにも間に合いません。

　どちらかを選ぶなら早い方一択ですが、それ以前にSさんがこれ以上の延期を許してくれるかどうかが問題です。
唯一の救いはWordPressをベースにするならさすがに完成までそれほどかからないであろうことです。
またしても私にできることはSさんに事業を説明し謝ることだけです。恐らく人生でこれほど申し訳ないと思ったことはないでしょう。
意外にもSさんは驚いたり怒ったりすることもなく再々度の延期を承諾してくれました。

== テスト運用

　1か月後、独自システムの開発という当初の予定からはかけ離れてしまったものの、ようやくSさんが実際にログインして操作できるテスト版ができあがりました。
とはいえIの開発は今回も遅れ、なんとか管理画面へのログインや記事のアップはできるようになっていたものの一部機能は未実装のままでした。
ともあれテスト環境ができたためIには引き続き未実装部分の開発を続けてもらいつつ、私は用意していた修正記事をアップして動作や表示に問題がないかチェックを行います。
当然修正箇所がまったくないというわけにもいかず、実装済み部分の修正必要箇所と未実装部分をリストアップしてSさんに報告します。

　Webページの公開が可能な段階まで進んだためここからはそれほど期間はかからないだろうと踏んでいたのですが、ここからもIの開発は遅れ続けました。
主にIがカスタマイズした部分の修正になるので手を出しづらく、私が手伝えそうな部分の修正もIは拒みます。
一切進捗がないわけでもなく、最低でも2週間に1箇所の微修正くらいは進むというペースでした。

== 破談

　そうこうしているうちにSさんができれば間に合わせて欲しいと言っていたイベントも終わり、さらに1か月が経過しました。ある日Sさんから契約を解除する旨の連絡が届きました。
当然納得せざるを得ませんでした。あらかじめ交わしておいた契約書では約束した業務が行われない場合は契約を解除できる旨を記載していましたし、
そもそも5回以上延期を許してもらっておいて未だに開発が完了していないというのは何をいわれても仕方のないレベルの失態です。

　簡単に諦めたくはありませんでした。私はSさんの活動に強い興味を持っていましたし、Sさん自身を高く評価していたため、せめてもの関係性を繋ぎとめておきたかったためです。
私はIと作ったものとは別に、WordPressとレンタルサーバーを使って2日で移行先のブログを制作し、Iとの共同事業ではなく私個人で引き受けさせてくれないかと提案しました。
もちろんIが作る予定だった機能やセキュリティはありませんが当初のSさんの要望であった独自ドメインブログへの移行ととりあえずの稼働開始だけであればすぐにでも完了できます。
しかし時すでに遅くSさんからは「別の業者に頼むことにしたのでお断りします」という旨の返信がありました。当然ながらもはや私に対する信頼は微塵も残っていなかったのです。
これでこの案件は完全に破談となり、私はIとの共同事業自体も畳むことを決定しました。

== 私はどうすればよかったのか

　私ひとりで引き受ければよかったと言ってしまえばそれまでなのですが、案件が動き出してからどうにかすることはできなかったのでしょうか。
振り返ってみれば5回以上も延期があったのです。1回目の延期はともかく、2回目の延期の段階でIを切って代わりのエンジニアを探すなり、最後に行ったように私個人での案件に切り替えることはできたはずです。
少なくとも今こうして振り返ってみて、5回以上の延期があり、元の倍以上の工期延長があるなかで大きな対策を打たないマネジメント担当者がまともとは思えません（私なのですが）。
Iにやる気がなかったのか、一生懸命やったけど間に合わなかったのかはわかりませんが、Iにやらせてダメなら他の具体的な方法を考え、方向転換の決定を下すことがマネジメント担当であり
責任者である私の仕事のはずです。つまるところこのプロジェクトを失敗に導いた最大の要因は私なのです。

　そもそも論でいえば共同事業を行っているなかでIが「飽き性で責任感に乏しい」ことに気付いていたのなら、そういった人物と共に仕事をするべきではなかったのです。
世界一の投資家と名高いウォーレンバフェットの言葉に次のようなものがあります。
「我々が（人材に）求めているのは、次の3つの資質だ。知性・エネルギー・誠実さ。とくに最後の誠実さを欠いている人は、知性・エネルギーをもつことも望まれないだろう。
誠実さを持たない人物に対しては、世の中の人々は愚鈍かつ怠惰であって欲しいと望むものだ。」（誠実さがなく知性とエネルギーをもつ人は周囲を破滅させる）
責任感に乏しいことを知っていながらIにこの案件を持ち掛けた私は人事としてもビジネスマンとしても失敗していたのです。

== 失敗しないチームビジネスの例

　見積もりといえば費用や工数を思い浮かべる方が多いでしょうが、チームで案件にあたる場合それ以前にチームメンバーの能力を見積もらなければいけません。
フリーランスとしてひとりでする仕事ならともかく、多くの人は会社組織に属しチームで仕事をしているはずです。
今回のケースでは私はフリーランスチームリーダーという立場で人事権も意志決定権も握っていたためなおさらですし、逆にいえば責任もすべて私が負っています。

　ではチームビジネスで失敗しないためにはどうすればいいのでしょうか。
自分がすべての作業を完遂可能な知識と技術を持っていれば見積もりと進捗のズレにも気付きやすく、遅れをカバーすることもできるかもしれませんが、それでは自分ができる仕事しか引き受けることができません。
それぞれ異なる能力を持った人同士が協力し合ってこそ相乗効果が生まれ、それこそがチームで仕事をする最大のメリットなのです。
私は画一的な答えを持ちませんし、新規開発ともなれば正確な工数を見積もるのは困難ですが、失敗する可能性が限りなく低い例をひとつご紹介します。

　それはこの合同誌です。おやかたさん（@oyakata2438）が主催者として、おおまかな要件定義（本のテーマと目次の例）と期日、報酬を決めた状態で執筆者を公募して制作されています。
ポイントはこれが「自分の商品」であることと、「各自の書いた内容を合わせて作る本」という点です。
これなら仮に誰かひとりが締め切りまでに原稿をあげなかったとしても間に合った人の原稿だけで本を完成させることができますし、
合同誌を公言しているため執筆者同士で書いた内容に矛盾があったとしてもそれは執筆者各々の考え方として捉えることができます。
この企画であればたとえIが入ったとしても企画自体が壊れてしまう心配はないでしょう。