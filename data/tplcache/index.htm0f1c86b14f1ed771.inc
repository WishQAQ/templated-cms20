<?php
$z[0]=Array("global","",115,141);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",185,215);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",252,279);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("include","",2369,2404);
$z[3][4]['filename']="head.htm";
$z[4]=Array("arclist","\r\n              <div class=\"carousel-item\">\r\n                <div class=\"carousel-img\"><a href=\"javascript:;\" target=\"\"><img src=\"[field:picname/]\" height=\"500\" alt=\"[field:title/]\" /></a></div>\r\n              </div>\r\n              ",2906,3190);
$z[4][4]['typeid']="19";
$z[4][4]['row']="4";
$z[5]=Array("arclist","\r\n                  [field:global runphp='yes' name=autoindex]\r\n                  \$a=\"\r\n                  <li class='col-4-1 last not-animated' data-animate='fadeInUp' >\";\r\n                    \$b=\"\r\n                  \r\n                  <li class='col-4-1 not-animated' data-animate='fadeInUp'>\";\r\n                    if ((@me%4)==0 && @me!=16)  @me=\$a;\r\n                    else  @me=\$b;\r\n                    [/field:global]\r\n                    <div class=\"product-item\">\r\n                      <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" /></a></div>\r\n                      <div class=\"portfolio-title\">\r\n                        <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                      </div>\r\n                    </div>\r\n                  </li>\r\n                  ",4911,5855);
$z[5][4]['typeid']="5";
$z[5][4]['row']="12";
$z[5][4]['titlelen']="80";
$z[6]=Array("type","\r\n            <div class=\"module-full-screen-more\"><a href=\"[field:typeurl/]\" target=\"_blank\">更多产品</a></div>\r\n            ",5987,6151);
$z[6][4]['typeid']="4";
$z[7]=Array("sql"," <span style=\"font-size:16px;\"><span style=\"color:#ffffff;\"> [field:content/]...</span></span> ",6778,6981);
$z[7][4]['sql']="SELECT content,substring(content,1,3200) as content FROM dede_arctype where id=2";
$z[8]=Array("type","\r\n            <div class=\"module-full-screen-more\"><a href=\"[field:typeurl/]\" target=\"_blank\">查看更多</a></div>\r\n            ",7050,7214);
$z[8][4]['typeid']="2";
$z[9]=Array("type","\r\n                            <div class=\"module-more-default float-right\"><a href=\"[field:typeurl/]\" target=\"_blank\">更多</a></div>\r\n                            ",8160,8358);
$z[9][4]['typeid']="9";
$z[10]=Array("arclist","\r\n                              <div class=\"headlines-content not-animated\" data-animate=\"fadeInUp\" data-delay=\"200\">\r\n                                <p><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" /></a></p>\r\n                                <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                                <div class=\"headlines-content-summary\">\r\n                                  <div class=\"qhd-content\">\r\n                                    <p> [field:description function=\"cn_substr(@me,180)\"/]...</p>\r\n                                  </div>\r\n                                </div>\r\n                              </div>\r\n                              ",8871,9690);
$z[10][4]['typeid']="9";
$z[10][4]['row']="1";
$z[10][4]['titlelen']="80";
$z[10][4]['limit']="0,1";
$z[11]=Array("arclist"," \r\n                                  <!-- S entry-item -->\r\n                                  <div class=\"entry-item\">\r\n                                    <div class=\"time\">\r\n                                      <p class=\"time-day\">[field:pubdate function=\"MyDate('d',@me)\"/]</p>\r\n                                      <p class=\"time-date\">[field:pubdate function=\"MyDate('Y-m',@me)\"/]</p>\r\n                                    </div>\r\n                                    <div class=\"entry-title\">\r\n                                      <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                                    </div>\r\n                                    <div class=\"entry-summary\">\r\n                                      <div class=\"qhd-content\">\r\n                                        <p> [field:description function=\"cn_substr(@me,180)\"/]...</p>\r\n                                      </div>\r\n                                    </div>\r\n                                  </div>\r\n                                  <!-- E entry-item --> \r\n                                  ",9923,11109);
$z[11][4]['typeid']="9";
$z[11][4]['row']="2";
$z[11][4]['titlelen']="80";
$z[11][4]['limit']="1,2";
$z[12]=Array("type","\r\n                            <div class=\"module-more-default float-right\"><a href=\"[field:typeurl/]\" target=\"_blank\">更多</a></div>\r\n                            ",11832,12030);
$z[12][4]['typeid']="8";
$z[13]=Array("arclist","\r\n                                <li><a class=\"article-title\" href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></li>\r\n                                ",12595,12818);
$z[13][4]['typeid']="8";
$z[13][4]['row']="6";
$z[13][4]['titlelen']="80";
$z[14]=Array("include","",13384,13421);
$z[14][4]['filename']="footer.htm";

?>