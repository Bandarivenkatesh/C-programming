(function(){var window=this;var d=this,f=function(a){return"string"==typeof a},aa=function(){},ba=function(a){var b=typeof a;if("object"==b)if(a){if(a instanceof Array)return"array";if(a instanceof Object)return b;var c=Object.prototype.toString.call(a);if("[object Window]"==c)return"object";if("[object Array]"==c||"number"==typeof a.length&&"undefined"!=typeof a.splice&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("splice"))return"array";if("[object Function]"==c||"undefined"!=typeof a.call&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("call"))return"function"}else return"null";else if("function"==b&&"undefined"==typeof a.call)return"object";return b};var ca=function(){var a=g,b=k;if(f(a))return f(b)&&1==b.length?a.indexOf(b,0):-1;for(var c=0;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},da=function(a,b){for(var c=a.length,e=f(a)?a.split(""):a,h=0;h<c;h++)h in e&&b.call(void 0,e[h],h,a)},ea=function(a){return Array.prototype.concat.apply([],arguments)};var m=function(){this.a="";this.b=fa};m.prototype.s=!0;m.prototype.j=function(){return this.a};var ha=function(a){return a instanceof m&&a.constructor===m&&a.b===fa?a.a:"type_error:TrustedResourceUrl"},fa={},ia=function(a){var b=new m;b.a=a;return b};var q=function(){this.l="";this.A=ja};q.prototype.s=!0;q.prototype.j=function(){return this.l};var ka=/^(?:(?:https?|mailto|ftp):|[^:/?#]*(?:[/?#]|$))/i,ja={},la=function(a){var b=new q;b.l=a;return b};la("about:blank");var r;a:{var ma=d.navigator;if(ma){var na=ma.userAgent;if(na){r=na;break a}}r=""};var t=function(a){t[" "](a);return a};t[" "]=aa;var u=function(){return d.googletag||(d.googletag={})};var v={1:"pagead2.googlesyndication.com",2:"pubads.g.doubleclick.net",3:"securepubads.g.doubleclick.net",173:"pubads.g.doubleclick.net",174:"securepubads.g.doubleclick.net",7:.02,10:0,13:1500,16:0,17:0,20:0,23:.001,24:200,27:.01,28:0,29:.01,33:"pagead2.googlesyndication.com",34:1,37:.01,38:.001,47:1E-4,53:"",54:0,58:1,159:1,60:0,63:0,65:.01,66:1E-5,67:0,68:0,69:.99,71:0,73:.001,75:"",162:0,163:"",76:"",77:.001,78:0,88:1,79:1,81:.001,83:1E-4,85:0,87:.2,89:1,90:0,91:0,96:1,97:0,99:.01,101:.001,103:.01,104:"/pagead/js/rum.js",105:0,106:"1-0-14",107:"1-0-14",110:0,113:1,114:0,115:.01,116:.001,117:.01,118:.95,123:0,120:.95,124:.95,121:.01,169:.01,122:.01,125:.01,127:.001,129:0,131:"",132:0,156:.05,133:0,134:.01,135:0,137:.001,167:1,138:"",143:.001,168:1E-4,144:.001,141:1,151:.01,157:.05,158:.001,164:0,150:"",153:.001,179:.01,170:!1,160:21061415,184:0,183:0,152:[],171:.01,172:null,175:"21061385,21061386,21061387,21061388,21061420,21061421,21061422,21061423,21061412,21061413,21061414,21061415",178:.001,182:1E3,185:0,180:null,181:null};v[6]=function(a,b){try{for(var c=null;c!=a;c=a,a=a.parent)switch(a.location.protocol){case "https:":return!0;case "file:":return!!b;case "http:":return!1}}catch(e){}return!0}(window);v[49]=(new Date).getTime();v[36]=/^true$/.test("false");v[46]=/^true$/.test("false");v[148]=/^true$/.test("false");var x=function(){var a={},b;for(b in v)a[b]=v[b];this.a=a};x.prototype.get=function(a){return this.a[a]};x.prototype.set=function(a,b){this.a[a]=b};x.b=void 0;x.a=function(){return x.b?x.b:x.b=new x};var oa=["21060621","21060622","21060833","21060713"],pa=["21061212","21061213","21061214","21061277"],qa=x.a().a,ra=u(),sa=ra._vars_,ta;for(ta in sa)qa[ta]=sa[ta];ra._vars_=qa;var ua=function(){return"169"},va=u();va.hasOwnProperty("getVersion")||(va.getVersion=ua);var wa=function(a){this.a=a||d.document||document};wa.prototype.createElement=function(a){return this.a.createElement(String(a))};wa.prototype.appendChild=function(a,b){a.appendChild(b)};var xa=function(){var a=aa;return function(){if(a){var b=a;a=null;b()}}};var ya=function(a,b){a.addEventListener?a.addEventListener("message",b,void 0):a.attachEvent&&a.attachEvent("onmessage",b)};var Aa=function(){var a=d;this.b=a=void 0===a?d:a;this.B="https://securepubads.g.doubleclick.net/static/3p_cookie.html";this.a=2;this.f=[];this.o=!1;a:{var b=[d.top];a=[];for(var c=0,e;e=b[c++];){a.push(e);try{if(e.frames)for(var h=e.frames.length,n=0;n<h&&50>b.length;++n)b.push(e.frames[n])}catch(M){}}b:{try{var w=d.parent;if(w&&w!=d){var l=w;break b}}catch(M){}l=null}(h=l)&&a.unshift(h);a.unshift(d);var p;for(h=0;h<a.length;++h)try{var G=a[h],Ga=y(G);if(Ga){this.a=za(Ga);if(2!=this.a)break a;var O;if(O=!p){l=void 0;try{if(l=!!G&&null!=G.location.href)c:{try{t(G.foo);l=!0;break c}catch(M){}l=!1}O=l}catch(M){O=!1}}O&&(p=G)}}catch(M){}this.b=p||this.b}},z=function(a){if(2!=Ba(a)){for(var b=1==Ba(a),c=0;c<a.f.length;c++)try{a.f[c](b)}catch(e){}a.f=[]}},Ca=function(a){var b=y(a.b);b&&2==a.a&&(a.a=za(b))},Ba=function(a){Ca(a);return a.a},Ea=function(a){var b=Da;b.f.push(a);if(2!=b.a)z(b);else if(b.o||(ya(b.b,function(a){var c=y(b.b);if(c&&a.source==c&&2==b.a){switch(a.data){case "3p_cookie_yes":b.a=1;break;case "3p_cookie_no":b.a=0}z(b)}}),b.o=!0),y(b.b))z(b);else{a=(new wa(b.b.document)).createElement("IFRAME");a.src=b.B;a.name="detect_3p_cookie";a.style.visibility="hidden";a.style.display="none";a.onload=function(){Ca(b);z(b)};try{b.b.document.body.appendChild(a)}catch(c){}}},Fa=function(a,b){try{return!!a.frames[b]}catch(c){return!1}},y=function(a){return a.frames[t("detect_3p_cookie")]||null},za=function(a){return Fa(a,"3p_cookie_yes")?1:Fa(a,"3p_cookie_no")?0:2};var A=null;var Ha=function(a){var b=!1,c;return function(){b||(c=a(),b=!0);return c}}(function(){var a=d.navigator&&d.navigator.userAgent||"";a=a.toLowerCase();return-1!=a.indexOf("firefox/")||-1!=a.indexOf("chrome/")||-1!=a.indexOf("opr/")}),Ia=function(a,b){var c="script";c=void 0===c?"":c;var e=a.createElement("link");e.rel="preload";b instanceof m?b=ha(b):b instanceof q?b=b instanceof q&&b.constructor===q&&b.A===ja?b.l:"type_error:SafeUrl":(b instanceof q||(b=b.s?b.j():String(b),ka.test(b)||(b="about:invalid#zClosurez"),b=la(b)),b=b.j());e.href=b;c&&(e.as=c);(a=a.getElementsByTagName("head")[0])&&a.appendChild(e)};var Ja=/^\.google\.(com?\.)?[a-z]{2,3}$/,Ka=/\.(cn|com\.bi|do|sl)$/,La=function(a){return Ja.test(a)&&!Ka.test(a)},B=d,Da,Ma=function(a,b){a="https://"+("adservice"+b+"/adsid/integrator."+a);b=["domain="+encodeURIComponent(d.location.hostname)];C[3]>=+new Date&&b.push("adsid="+encodeURIComponent(C[1]));return a+"?"+b.join("&")},C,D,E=function(){B=d;C=B.googleToken=B.googleToken||{};var a=+new Date;C[1]&&C[3]>a&&0<C[2]||(C[1]="",C[2]=-1,C[3]=-1,C[4]="",C[6]="");D=B.googleIMState=B.googleIMState||{};La(D[1])||(D[1]=".google.com");"array"==ba(D[5])||(D[5]=[]);"boolean"==typeof D[6]||(D[6]=!1);"array"==ba(D[7])||(D[7]=[]);"number"==typeof D[8]||(D[8]=0)},Na=function(a){try{a()}catch(b){d.setTimeout(function(){throw b;},0)}},Pa=function(a){"complete"==d.document.readyState||"loaded"==d.document.readyState||d.currentScript&&d.currentScript.async?Oa(3):a()},Qa=0,F={g:function(){return 0<D[8]},m:function(){D[8]++},u:function(){0<D[8]&&D[8]--},v:function(){D[8]=0},c:function(){},w:function(){return!1},i:function(){return D[5]},h:Na},H={g:function(){return D[6]},m:function(){D[6]=!0},u:function(){D[6]=!1},v:function(){D[6]=!1},c:function(){},w:function(){return".google.com"!=D[1]&&2<++Qa},i:function(){return D[7]},h:function(a){Pa(function(){Na(a)})}},Oa=function(a){if(1E-5>Math.random()){d.google_image_requests||(d.google_image_requests=[]);var b=d.document.createElement("img");b.src="https://pagead2.googlesyndication.com/pagead/gen_204?id=imerr&err="+a;d.google_image_requests.push(b)}};F.c=function(){if(!F.g()){var a=d.document,b=function(b){var c=Ma("js",b);Ia(a,c);b=a.createElement("script");b.type="text/javascript";b.onerror=function(){return d.processGoogleToken({},2)};c=ia(c);b.src=ha(c);try{(a.head||a.body||a.documentElement).appendChild(b),F.m()}catch(w){}},c=D[1];b(c);".google.com"!=c&&b(".google.com");b={};var e=(b.newToken="FBT",b);d.setTimeout(function(){return d.processGoogleToken(e,1)},1E3)}};H.c=function(){if(!H.g()){var a=d.document,b=Ma("sync.js",D[1]);Ia(a,b);b=b.replace(/[\W]/g,function(a){return"&#"+a.charCodeAt()+";"});var c=t("script"),e="<"+c+' src="'+b+'"></'+c+">"+("<"+c+'>processGoogleTokenSync({"newToken":"FBS"},5);</'+c+">");Pa(function(){a.write(e);H.m()})}};var Ra=function(a,b){E();var c=B.googleToken[5]||0;a&&(0!=c||C[3]>=+new Date?b.h(a):(b.i().push(a),b.c()));C[3]>=+new Date&&C[2]>=+new Date||b.c()},Ta=function(a){d.processGoogleToken=d.processGoogleToken||function(a,c){return Sa(F,a,c)};Ra(a,F)},Ua=function(a){d.processGoogleTokenSync=d.processGoogleTokenSync||function(a,c){return Sa(H,a,c)};Ra(a,H)},Va=function(a){Da=Da||new Aa;Ea(function(b){b&&a()})},Sa=function(a,b,c){b=void 0===b?{}:b;c=void 0===c?0:c;var e=b.newToken||"",h=parseInt(b.freshLifetimeSecs||"",10)||3600,n=parseInt(b.validLifetimeSecs||"",10)||86400,w=b["1p_jar"]||"";b=b.pucrd||"";E();1==c?a.v():a.u();if(!e&&a.w())La(".google.com")&&(D[1]=".google.com"),a.c();else{var l=B.googleToken=B.googleToken||{},p=!(C[3]>=+new Date)&&0!=c;if(0==c&&e&&f(e)&&0<h&&0<n&&f(w)||p)p=+new Date,h=p+1E3*h,n=p+1E3*n,Oa(c),l[5]=c,l[1]=e,l[2]=h,l[3]=n,l[4]=w,l[6]=b,E();if(e||!a.g()){c=a.i();for(e=0;e<c.length;e++)a.h(c[e]);c.length=0}}};var Wa=function(){var a=I;if(!a.google_ltobserver){var b=new a.PerformanceObserver(function(b){var c=a.google_lt_queue=a.google_lt_queue||[];da(b.getEntries(),function(a){return c.push(a)})});b.observe({entryTypes:["longtask"]});a.google_ltobserver=b}};t("partner.googleadservices.com");var Xa=t("www.googletagservices.com"),J=!1,Ya=!1,K="",L="",N={},Za=(N["21061282"]="/gpt/pubads_impl_nr_c_",N["21061283"]="/gpt/pubads_impl_nr_",N["21061289"]="/gpt/pubads_impl_moa_c_",N["21061290"]="/gpt/pubads_impl_moa_e_",N),$a=x.a().get(46)&&!x.a().get(6);K=$a?"http:":"https:";L=x.a().get($a?2:3);var P=function(a,b){if(null===A){A="";try{var c="";try{c=d.top.location.hash}catch(n){c=d.location.hash}if(c){var e=c.match(/\bdeid=([\d,]+)/);A=e?e[1]:""}}catch(n){}}if(c=(c=A)&&c.match(new RegExp("\\b("+a.join("|")+")\\b")))a=c[0];else if(b)a:{if(!(1E-4>Math.random())&&(c=Math.random(),c<a.length*b)){try{var h=new Uint32Array(1);d.crypto.getRandomValues(h);c=h[0]/65536/65536}catch(n){c=Math.random()}a=a[Math.floor(c*a.length)];break a}a=null}else a=null;return a};var Q=u(),I=Q.fifWin||window,R=I.document,ab=[],bb=u();bb.hasOwnProperty("cmd")||(bb.cmd=ab);if(Q.evalScripts)Q.evalScripts();else{switch(P(pa,x.a().get(178))){case "21061213":Ya=!0;break;case "21061214":J=!0;break;case "21061277":J=Ya=!0}var S=x.a().get(138)||P(oa,x.a().get(137))||P(["21061149"],x.a().get(167)),T=P(["21061316","21061317"],0);T&&("21061317"==T?(x.a().set(173,Xa),x.a().set(174,Xa)):x.a().set(163,T),x.a().get(152).push(T));-1!=r.indexOf("iPhone")&&x.a().set(79,0);var cb=x.a().get(160);cb&&x.a().get(152).push(cb);if(S)try{var db=x.a().get(150);db&&(E(),La(db)&&(D[1]=db));x.a().set(138,S)}catch(a){}x.a().set(172,R.currentScript);var eb=I.PerformanceObserver&&I.PerformanceLongTaskTiming&&P(["21061354","21061355"],0);eb&&x.a().get(152).push(eb);"21061355"==eb&&Wa();var fb=I.performance;if(fb&&fb.now){var gb=fb.now();(I.google_js_reporting_queue=I.google_js_reporting_queue||[]).push({label:"1",type:9,value:gb,uniqueId:"rt."+Math.random()})}var hb;var U=x.a(),V=U.get(76);if(V)hb=V;else{var W=["168","169"],ib=W[0]||"169",jb="",X,kb="/gpt/pubads_impl_",lb=!1;if(U.get(131))X="169";else if(1<W.length){var Y=["21061424","21061425"],g=[""];if(1>=g.length||Y.length!=g.length)g=[];var k=P(ea(Y,g),.1);if(k){U.set(53,k);var mb;mb=0<=ca();U.set(170,mb);mb&&(Y=g);if(k==Y[0]){var nb=W[Y.length-1];jb="?v="+nb;U.set(163,nb)}else for(var Z=1;Z<Y.length;++Z)if(k==Y[Z]){X=W[Z];break}}else lb=!0}else lb=!0;X=X||ib;if(lb){var ob=P(["21061282","21061283"],0),pb=P(["21061289","21061290"],.05);ob?(U.get(152).push(ob),X=20171025,kb=Za[ob]):pb&&(U.get(152).push(pb),X=20171107,kb=Za[pb])}V=K+"//"+L+kb+X+".js"+jb;x.a().set(76,V);hb=V}var qb=hb,rb=R.currentScript;if(!("complete"==R.readyState||"loaded"==R.readyState||rb&&rb.async)){var sb="gpt-impl-"+Math.random();try{var tb='<script id="'+sb+'" src="'+qb+'">\x3c/script>';J&&Ha()&&(tb+='<link rel="preconnect" href="'+K+"//"+L+'">');R.write(tb);Q._syncTagged_=!0}catch(a){}if(R.getElementById(sb))switch(Q._loadStarted_=!0,S){case "21060833":var ub=xa();Va(ub);Ua(ub);break;case "21060622":case "21060713":case "21061149":Ua(null)}}if(!Q._loadStarted_){switch(S){case "21060833":var vb=xa();Va(vb);Ta(vb);break;case "21060622":case "21060713":case "21061149":Ta(null)}Ya&&Ia(R,qb);var wb=R.createElement("script");wb.src=qb;wb.async=!0;var xb=R.head||R.body||R.documentElement;xb.appendChild(wb);if(J&&Ha()){var yb=R.createElement("link");yb.rel="preconnect";yb.href=K+"//"+L;xb.appendChild(yb)}Q._loadStarted_=!0}};}).call(this.googletag&&googletag.fifWin?googletag.fifWin.parent:this)
