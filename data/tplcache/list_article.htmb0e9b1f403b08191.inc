<?php
$z[0]=Array("field","",117,136);
$z[0][4]['name']="title";
$z[1]=Array("global","",137,163);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",204,233);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",273,331);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",2421,2456);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",4307,4336);
$z[5][4]['name']="position";
$z[6]=Array("type","\r\n            <h2>[field:typename /]</h2>\r\n            ",4443,4521);
$z[7]=Array("list","\r\n                    [field:global runphp='yes' name=autoindex]\r\n                    \$a=\"\r\n                    <li class='col-3-1 last not-animated' data-animate='fadeInUp' >\";\r\n                      \$b=\"\r\n                    \r\n                    <li class='col-3-1 not-animated' data-animate='fadeInUp'>\";\r\n                      if ((@me%3)==0 && @me!=12)  @me=\$a;\r\n                      else  @me=\$b;\r\n                      [/field:global]\r\n                      <div class=\"product-item\">\r\n                        <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" /></a></div>\r\n                        <div class=\"portfolio-title\">\r\n                          <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                        </div>\r\n                      </div>\r\n                    </li>\r\n                    ",5075,6024);
$z[7][4]['pagesize']="9";
$z[8]=Array("pagelist","",6238,6304);
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="2";
$z[9]=Array("include","",6583,6618);
$z[9][4]['filename']="left.htm";
$z[10]=Array("include","",6726,6763);
$z[10][4]['filename']="footer.htm";

?>