!function(){"use strict";var a=window.document,b={STYLES:"https://c.disquscdn.com/next/embed/styles/lounge.c61e7efbeb6a4ac7d81f7c61a454a72c.css",RTL_STYLES:"https://c.disquscdn.com/next/embed/styles/lounge_rtl.bbd799aee53a71a623c9f9d998ddde47.css","lounge/main":"https://c.disquscdn.com/next/embed/lounge.bundle.b4f0f934e300a59410ed8012277d0fd8.js","discovery/main":"https://c.disquscdn.com/next/embed/discovery.bundle.daedd146972fc7d8dffd9be34c404865.js","remote/config":"https://disqus.com/next/config.js","common/vendor_extensions/highlight":"https://c.disquscdn.com/next/embed/highlight.6fbf348532f299e045c254c49c4dbedf.js"};window.require={baseUrl:"https://c.disquscdn.com/next/current/embed",paths:["lounge/main","discovery/main","remote/config","common/vendor_extensions/highlight"].reduce(function(a,c){return a[c]=b[c].slice(0,-3),a},{})};var c=a.createElement("script");c.onload=function(){require(["common/main"],function(a){a.init("lounge",b)})},c.src="https://c.disquscdn.com/next/embed/common.bundle.8edffe1405dcc2d5eb5ee9d96a2866d1.js",a.body.appendChild(c)}();