# 出站策略
# 注意锚点必须放在引用的上方，可以集中把锚点全部放yaml的顶部。
pr: &pr {type: select, proxies: [默认代理, IEPL-稳定IP,港区-稳定IP, 牛逼大流量,日本-稳定IP, 美国-稳定IP, 新国-稳定IP, 韩国-稳定IP, 英国-稳定IP, 香港智能, 日本智能, 美国智能, 新国智能, 韩国智能, 英国智能, 香港负载均衡, 日本负载均衡, 新国负载均衡, 韩国负载均衡, 美国负载均衡, 英国负载均衡 , 香港自动, 日本自动, 美国自动, 新国自动, 韩国自动, 英国自动, 自动选择, 香港故转, 日本故转, 美国故转, 新国故转, 韩国故转, 英国故转, 香港节点, 日本节点, 新国节点, 美国节点, 韩国节点, 英国节点, 其他节点, 全部节点, 直连]}
pr_b: &pr_b {type: select, proxies: [IEPL-稳定IP,港区-稳定IP, 牛逼大流量,日本-稳定IP, 美国-稳定IP, 新国-稳定IP, 韩国-稳定IP, 英国-稳定IP, 香港智能, 日本智能, 美国智能, 新国智能, 韩国智能, 英国智能, 香港负载均衡, 日本负载均衡, 新国负载均衡, 韩国负载均衡, 美国负载均衡, 英国负载均衡, 香港自动, 日本自动, 美国自动, 新国自动, 韩国自动, 英国自动, 自动选择, 香港故转, 日本故转, 美国故转, 新国故转, 韩国故转, 英国故转, 香港节点, 日本节点, 新国节点, 美国节点, 韩国节点, 英国节点, 其他节点, 全部节点, 直连]}
pr_c: &pr_c {type: select, proxies: [直连, 默认代理, IEPL-稳定IP,港区-稳定IP, 牛逼大流量,日本-稳定IP, 美国-稳定IP, 新国-稳定IP, 韩国-稳定IP, 英国-稳定IP, 香港智能, 日本智能, 美国智能, 新国智能, 韩国智能, 英国智能, 香港负载均衡, 日本负载均衡, 新国负载均衡, 韩国负载均衡, 美国负载均衡, 英国负载均衡, 香港自动, 日本自动, 美国自动, 新国自动, 韩国自动, 英国自动, 自动选择, 香港故转, 日本故转, 美国故转, 新国故转, 韩国故转, 英国故转, 香港节点, 日本节点, 新国节点, 美国节点, 韩国节点, 英国节点, 其他节点, 全部节点]}

proxy-groups:
  - {name: 默认代理, <<: *pr_b}
  - {name: Ai, <<: *pr}
  - {name: Telegram, <<: *pr}
  - {name: YouTube, <<: *pr}
  - {name: Google, <<: *pr}
  - {name: Twitter(X), <<: *pr}
  - {name: GitHub, <<: *pr}
  - {name: Emby, <<: *pr}
  - {name: Video, <<: *pr}
  - {name: Social, <<: *pr}
  - {name: WhatsApp, <<: *pr}
  - {name: OneDrive, <<: *pr_c}
  - {name: Microsoft, <<: *pr_c}
  - {name: Speedtest, <<: *pr}
  - {name: PayPal, <<: *pr}
  - {name: GameDownload, <<: *pr_c}
  - {name: Steam, <<: *pr}
  - {name: Game, <<: *pr}
  - {name: Apple, <<: *pr_c}
  - {name: TeamViewer, <<: *pr_c}
  - {name: 漏网之鱼, <<: *pr}

# 手选策略组选择最快的节点 ，配合稳定IP策略组使用。
  - {name: IEPL节点, type: select, include-all: true, filter: "(?i)IEPL"}
  - {name: 香港节点, type: select, include-all: true, filter: "(?i)港|hk|hongkong|hong kong"}
  - {name: 日本节点, type: select, include-all: true, filter: "(?i)日|jp|japan"}
  - {name: 美国节点, type: select, include-all: true, filter: "(?=.*(广美|美|US|纽约|波特兰|达拉斯|俄勒|凤凰城|费利蒙|拉斯|洛杉|圣何塞|圣克拉|西雅|芝加|🇺🇸|United States)).*$"}
  - {name: 新国节点, type: select, include-all: true, filter: "(?=.*(广新|新加坡|SG|坡|狮城|🇸🇬|Singapore)).*$"}
  - {name: 韩国节点, type: select, include-all: true, filter: "(?=.*(广韩|韩国|韓國|KR|首尔|春川|🇰🇷|Korea)).*$"}
  - {name: 英国节点, type: select, include-all: true, filter: "(?=.*(英国|英|伦敦|UK|United Kingdom|🇬🇧|London)).*$"}
  - {name: 其他节点, type: select, include-all: true, filter: "^((?!(直连|拒绝|广港|香港|HK|Hong Kong|🇭🇰|HongKong|广台|台湾|台灣|TW|Tai Wan|🇹🇼|🇨🇳|TaiWan|Taiwan|广日|日本|JP|川日|东京|大阪|泉日|埼玉|沪日|深日|🇯🇵|Japan|广新|新加坡|SG|坡|狮城|🇸🇬|Singapore|广韩|韩国|韓國|KR|首尔|春川|🇰🇷|Korea|广美|美|US|纽约|波特兰|达拉斯|俄勒|凤凰城|费利蒙|拉斯|洛杉|圣何塞|圣克拉|西雅|芝加|🇺🇸|United States|英国|UK|United Kingdom|伦敦|英|London|🇬🇧)).)*$"}
  - {name: 牛逼香港节点, type: select, include-all: true, filter: "(?=.*(港|hk|hongkong|hong kong))^((?!(x)).)*$"}
  - {name: 牛逼日本节点, type: select, include-all: true, filter: "(?=.*(日|jp|japan))^((?!(x)).)*$"}
  - {name: 牛逼美国节点, type: select, include-all: true, filter: "(?=.*(广美|美|US|纽约|波特兰|达拉斯|俄勒|凤凰城|费利蒙|拉斯|洛杉|圣何塞|圣克拉|西雅|芝加|🇺🇸|United States))^((?!(x)).)*$"}
  - {name: 牛逼新国节点, type: select, include-all: true, filter: "(?=.*(广新|新加坡|SG|坡|狮城|🇸🇬|Singapore))^((?!(x)).)*$"}
  - {name: 牛逼韩国节点, type: select, include-all: true, filter: "(?=.*(广韩|韩国|韓國|KR|首尔|春川|🇰🇷|Korea))^((?!(x)).)*$"}
  - {name: 牛逼英国节点, type: select, include-all: true, filter: "(?=.*(英国|英|伦敦|UK|United Kingdom|🇬🇧|London))^((?!(x)).)*$"}
  - {name: 牛逼其他节点, type: select, include-all: true, filter: "^((?!(直连|拒绝|广港|香港|HK|Hong Kong|🇭🇰|HongKong|广台|台湾|台灣|TW|Tai Wan|🇹🇼|🇨🇳|TaiWan|Taiwan|广日|日本|JP|川日|东京|大阪|泉日|埼玉|沪日|深日|🇯🇵|Japan|广新|新加坡|SG|坡|狮城|🇸🇬|Singapore|广韩|韩国|韓國|KR|首尔|春川|🇰🇷|Korea|广美|美|US|纽约|波特兰|达拉斯|俄勒|凤凰城|费利蒙|拉斯|洛杉|圣何塞|圣克拉|西雅|芝加|🇺🇸|United States|英国|UK|United Kingdom|伦敦|英|London|🇬🇧|x)).)*$"}
  - {name: 全部节点, type: select, include-all: true}
# 牛逼大流量节点
  - {name: 牛逼大流量, type: fallback, tolerance: 30, interval: 40, lazy: false, proxies: [牛逼香港节点, 香港智能] }
# 用于IP敏感的专用嵌套策略组，故障转移策略组嵌套 手选 + smart策略组。缺点：最长中断40秒。
  - {name: IEPL-稳定IP, type: fallback, tolerance: 30, interval: 40, lazy: false, proxies: [IEPL节点, IEPL智能] }
  - {name: 港区-稳定IP, type: fallback, tolerance: 30, interval: 40, lazy: false, proxies: [香港节点, 香港智能] }
  - {name: 日本-稳定IP, type: fallback, tolerance: 30, interval: 40, lazy: false, proxies: [日本节点, 日本智能] }
  - {name: 美国-稳定IP, type: fallback, tolerance: 30, interval: 40, lazy: false, proxies: [美国节点, 美国智能] }
  - {name: 新国-稳定IP, type: fallback, tolerance: 30, interval: 40, lazy: false, proxies: [新国节点, 新国智能] }
  - {name: 韩国-稳定IP, type: fallback, tolerance: 30, interval: 40, lazy: false, proxies: [韩国节点, 韩国智能] }
  - {name: 英国-稳定IP, type: fallback, tolerance: 30, interval: 40, lazy: false, proxies: [韩国节点, 英国智能] }

# 策略组
  - {name: IEPL智能, type: smart, include-all: true, uselightgbm: true,collectdata: false, health-check: { enable: true, url: "https://www.gstatic.com/generate_204", interval: 60, tolerance: 2 }, interval: 300, filter: "(?=.*(IEPL))", url: "http://www.gstatic.com/generate_204", lazy: true, persistent: true}
  - {name: 香港智能, type: smart, include-all: true, uselightgbm: true,collectdata: false, health-check: { enable: true, url: "https://www.gstatic.com/generate_204", interval: 60, tolerance: 2 }, interval: 300, filter: "(?=.*(港|HK|(?i)Hong))^((?!(台|日|韩|新|深|美)).)*$", url: "http://www.gstatic.com/generate_204", lazy: true, persistent: true}
  - {name: 牛逼香港智能, type: smart, include-all: true, uselightgbm: true,collectdata: false, health-check: { enable: true, url: "https://www.gstatic.com/generate_204", interval: 60, tolerance: 2 }, interval: 300, filter: "(?=.*(港|HK|(?i)Hong))^((?!(台|日|韩|新|深|美|x)).)*$", url: "http://www.gstatic.com/generate_204", lazy: true, persistent: true}
  - {name: 日本智能, type: smart, include-all: true, uselightgbm: true,collectdata: false, health-check: { enable: true, url: "https://www.gstatic.com/generate_204", interval: 60, tolerance: 2 }, interval: 300, filter: "(?=.*(日|JP|(?i)Japan))^((?!(港|台|韩|新|美)).)*$", url: "http://www.gstatic.com/generate_204", lazy: true, persistent: true}
  - {name: 美国智能, type: smart, include-all: true, uselightgbm: true,collectdata: false, health-check: { enable: true, url: "https://www.gstatic.com/generate_204", interval: 60, tolerance: 2 }, interval: 300, filter: "(?=.*(广美|美|US|纽约|波特兰|达拉斯|俄勒|凤凰城|费利蒙|拉斯|洛杉|圣何塞|圣克拉|西雅|芝加|🇺🇸|United States)).*$", url: "http://www.gstatic.com/generate_204", lazy: true, persistent: true}
  - {name: 新国智能, type: smart, include-all: true, uselightgbm: true,collectdata: false, health-check: { enable: true, url: "https://www.gstatic.com/generate_204", interval: 60, tolerance: 2 }, interval: 300, filter: "(?=.*(广新|新加坡|SG|坡|狮城|🇸🇬|Singapore)).*$", url: "http://www.gstatic.com/generate_204", lazy: true, persistent: true}
  - {name: 韩国智能, type: smart, include-all: true, uselightgbm: true,collectdata: false, health-check: { enable: true, url: "https://www.gstatic.com/generate_204", interval: 60, tolerance: 2 }, interval: 300, filter: "(?=.*(广韩|韩国|韓國|KR|首尔|春川|🇰🇷|Korea)).*$", url: "http://www.gstatic.com/generate_204", lazy: true, persistent: true}
  - {name: 英国智能, type: smart, include-all: true, uselightgbm: true,collectdata: false, health-check: { enable: true, url: "https://www.gstatic.com/generate_204", interval: 60, tolerance: 2 }, interval: 300, filter: "(?=.*(英国|英|伦敦|UK|United Kingdom|🇬🇧|London)).*$", url: "http://www.gstatic.com/generate_204", lazy: true, persistent: true}
  - {name: 香港自动, type: url-test, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(港|HK|(?i)Hong))^((?!(台|日|韩|新|深|美)).)*$"}
  - {name: 日本自动, type: url-test, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(日|JP|(?i)Japan))^((?!(港|台|韩|新|美)).)*$" }
  - {name: 美国自动, type: url-test, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(广美|美|US|纽约|波特兰|达拉斯|俄勒|凤凰城|费利蒙|拉斯|洛杉|圣何塞|圣克拉|西雅|芝加|🇺🇸|United States)).*$"}
  - {name: 新国自动, type: url-test, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(广新|新加坡|SG|坡|狮城|🇸🇬|Singapore)).*$"}
  - {name: 韩国自动, type: url-test, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(广韩|韩国|韓國|KR|首尔|春川|🇰🇷|Korea)).*$"}
  - {name: 英国自动, type: url-test, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(英国|英|伦敦|UK|United Kingdom|🇬🇧|London)).*$"}
  - {name: 自动选择, type: url-test, include-all: true, tolerance: 20, interval: 300, filter: "^((?!(直连)).)*$"}
  - {name: 香港故转, type: fallback, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(港|HK|(?i)Hong))^((?!(台|日|韩|新|深|美)).)*$"}
  - {name: 日本故转, type: fallback, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(日|JP|(?i)Japan))^((?!(港|台|韩|新|美)).)*$" }
  - {name: 美国故转, type: fallback, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(广美|美|US|纽约|波特兰|达拉斯|俄勒|凤凰城|费利蒙|拉斯|洛杉|圣何塞|圣克拉|西雅|芝加|🇺🇸|United States)).*$"}
  - {name: 新国故转, type: fallback, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(广新|新加坡|SG|坡|狮城|🇸🇬|Singapore)).*$"}
  - {name: 韩国故转, type: fallback, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(广韩|韩国|韓國|KR|首尔|春川|🇰🇷|Korea)).*$"}
  - {name: 英国故转, type: fallback, include-all: true, tolerance: 20, interval: 300, filter: "(?=.*(英国|英|伦敦|UK|United Kingdom|🇬🇧|London)).*$"}

# 负载均衡策略组
  - {name: 香港负载均衡, type: load-balance, strategy: round-robin, interval: 180, tolerance: 1, lazy: true, health-check: {enable: true, url: "https://www.gstatic.com/generate_204", interval: 30, tolerance: 1}, proxies: [香港智能, 香港自动, 香港节点]}
  - {name: 日本负载均衡, type: load-balance, strategy: round-robin, interval: 180, tolerance: 1, lazy: true, health-check: {enable: true, url: "https://www.gstatic.com/generate_204", interval: 30, tolerance: 1}, proxies: [日本智能, 日本自动, 日本节点]}
  - {name: 新国负载均衡, type: load-balance, strategy: round-robin, interval: 180, tolerance: 1, lazy: true, health-check: {enable: true, url: "https://www.gstatic.com/generate_204", interval: 30, tolerance: 1}, proxies: [新国智能, 新国自动, 新国节点]}
  - {name: 韩国负载均衡, type: load-balance, strategy: round-robin, interval: 180, tolerance: 1, lazy: true, health-check: {enable: true, url: "https://www.gstatic.com/generate_204", interval: 30, tolerance: 1}, proxies: [韩国智能, 韩国自动, 韩国节点]}
  - {name: 美国负载均衡, type: load-balance, strategy: round-robin, interval: 180, tolerance: 1, lazy: true, health-check: {enable: true, url: "https://www.gstatic.com/generate_204", interval: 30, tolerance: 1}, proxies: [美国智能, 美国自动, 美国节点]}
  - {name: 英国负载均衡, type: load-balance, strategy: round-robin, interval: 180, tolerance: 1, lazy: true, health-check: {enable: true, url: "https://www.gstatic.com/generate_204", interval: 30, tolerance: 1}, proxies: [英国智能, 英国自动, 英国节点]}

# 规则匹配
# 此规则部分没有做防泄露处理，因为弊严重大于利！
rules:
  - DOMAIN-SUFFIX,qichiyu.com,默认代理
  - RULE-SET,private_domain,直连
  - RULE-SET,apple_domain,Apple
  - RULE-SET,proxylite,默认代理
  - RULE-SET,ai,Ai
  - RULE-SET,telegram_domain,Telegram
  - RULE-SET,telegram_ip,Telegram,no-resolve
  - RULE-SET,youtube_domain,YouTube
  - RULE-SET,google_domain,Google
  - RULE-SET,Twitter_domain,Twitter(X)
  - RULE-SET,github_domain,GitHub
  - RULE-SET,TeamViewer_list,TeamViewer
  - RULE-SET,Emby_class-1,Emby
  - RULE-SET,Emby_class-2,Emby
  - RULE-SET,Emby_class-3,Emby
  - RULE-SET,Emby_class-4,Emby
  - RULE-SET,Emby_class-5,Emby
  - RULE-SET,GameDownload_class-1,GameDownload
  - RULE-SET,GameDownload_class-2,GameDownload
  - RULE-SET,Steam_domain,Steam
  - RULE-SET,Video_class,Video
  - RULE-SET,Social_class,Social
  - RULE-SET,WhatsApp_class,WhatsApp
  - RULE-SET,Epic_class,Game
  - RULE-SET,Blizzard_class,Game
  - RULE-SET,UBI_class,Game
  - RULE-SET,Sony_class,Game
  - RULE-SET,Nintend_class,Game
  - RULE-SET,onedrive_domain,OneDrive
  - RULE-SET,microsoft_domain,Microsoft
  - RULE-SET,speedtest_domain,Speedtest
  - RULE-SET,paypal_domain,PayPal
  - RULE-SET,gfw_domain,默认代理
  - RULE-SET,geolocation-!cn,默认代理
  - RULE-SET,cn_domain,直连
  - RULE-SET,google_ip,Google,no-resolve
  - RULE-SET,cn_ip,直连
  - MATCH,漏网之鱼

# 规则集
rule-anchor:
  ip: &ip {type: http, interval: 86400, behavior: ipcidr, format: mrs}
  domain: &domain {type: http, interval: 86400, behavior: domain, format: mrs}
  class: &class {type: http, interval: 86400, behavior: classical, format: text}

rule-providers:
  private_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/private.mrs"}
  proxylite: { <<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/qichiyuhub/rule/refs/heads/main/proxy.list"}
  ai: { <<: *domain, url: "https://git.yylx.win/https://github.com/MetaCubeX/meta-rules-dat/raw/refs/heads/meta/geo/geosite/category-ai-!cn.mrs" }
  telegram_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/telegram.mrs"}
  telegram_ip: { <<: *ip, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geoip/telegram.mrs"}
  youtube_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/youtube.mrs"}
  google_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/google.mrs"}
  Twitter_domain: {<<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/x.mrs"}
  github_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/github.mrs"}
  TeamViewer_list: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/refs/heads/master/rule/Clash/TeamViewer/TeamViewer.list"}
  Emby_class-1: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/refs/heads/meta/geo/geosite/classical/category-emby.list"}
  Emby_class-2: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/666OS/YYDS/refs/heads/main/mihomo/rules/emby.list"}
  Emby_class-3: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/refs/heads/master/rule/Clash/Emby/Emby.list"}
  Emby_class-4: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/ddgksf2013/Filter/refs/heads/master/Emby.list"}
  Emby_class-5: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/ccyin/Clash/refs/heads/main/Clash/emby-01.list"}
  Video_class: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/refs/heads/meta/geo/geosite/classical/category-entertainment.list"}
  Social_class: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/refs/heads/meta/geo/geosite/classical/category-social-media-!cn.list"}
  WhatsApp_class: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/refs/heads/master/rule/Clash/Whatsapp/Whatsapp.list"}
  GameDownload_class-1: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/refs/heads/master/rule/Clash/Game/GameDownload/GameDownload.list"}
  GameDownload_class-2: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/refs/heads/master/rule/Clash/SteamCN/SteamCN.list"}
  Steam_domain: {<<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/steam.mrs"}
  Epic_class: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/master/rule/Clash/Epic/Epic.list"}
  EA_class: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/master/rule/Clash/EA/EA.list"}
  Blizzard_class: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/master/rule/Clash/Blizzard/Blizzard.list"}
  UBI_class: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/master/rule/Clash/UBI/UBI.list"}
  Sony_class: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/master/rule/Clash/Sony/Sony.list"}
  Nintend_class: {<<: *class, url: "https://git.yylx.win/https://raw.githubusercontent.com/blackmatrix7/ios_rule_script/master/rule/Clash/Nintendo/Nintendo.list"}
  paypal_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/paypal.mrs"}
  onedrive_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/onedrive.mrs"}
  microsoft_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/microsoft.mrs"}
  apple_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/apple-cn.mrs"}
  speedtest_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/ookla-speedtest.mrs"}
  gfw_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/gfw.mrs"}
  geolocation-!cn: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/geolocation-!cn.mrs"}
  cn_domain: { <<: *domain, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geosite/cn.mrs"}
  cn_ip: { <<: *ip, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geoip/cn.mrs"}
  google_ip: { <<: *ip, url: "https://git.yylx.win/https://raw.githubusercontent.com/MetaCubeX/meta-rules-dat/meta/geo/geoip/google.mrs"}
