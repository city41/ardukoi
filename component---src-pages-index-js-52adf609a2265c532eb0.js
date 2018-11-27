(window.webpackJsonp=window.webpackJsonp||[]).push([[5],{142:function(e,t,A){"use strict";A.r(t);var a=A(0),n=A.n(a),r=A(147),i=A(155),o=(A(171),A(173)),u=A.n(o),g=A(174),l=A.n(g),s=A(175),c=A.n(s),d=A(176),m=A.n(d),C=A(177),f=A.n(C);t.default=function(){return n.a.createElement(i.a,{className:"home"},n.a.createElement("img",{className:"titleImage",src:u.a,alt:"Ardynia Title Screen"}),n.a.createElement("p",null,"Explore dungeons, solve puzzles, fight bosses, all from your pocket. Ardynia is an upcoming adventure game for the ArduBoy. Checkout the"," ",n.a.createElement(r.Link,{to:"/updates"},"updates page")," for the latest."),n.a.createElement("div",{className:"mediaContainer"},n.a.createElement("video",{className:"crossWater",src:l.a,muted:!0,width:"256",height:"128",autoPlay:!0,loop:!0,playsinline:!0,controls:!0}),n.a.createElement("div",{className:"divider"}),n.a.createElement("video",{className:"goIntoDungeon",src:c.a,muted:!0,width:"256",height:"128",autoPlay:!0,loop:!0,playsinline:!0,controls:!0}),n.a.createElement("img",{className:"inGameMenu",src:m.a,alt:"in game menu"}),n.a.createElement("img",{className:"attackBlob",src:f.a,alt:"in game menu"})),n.a.createElement("p",null,"The game will be free and open source when released.",n.a.createElement("br",null),"©2018 Matt Greer"))}},147:function(e,t,A){"use strict";A.r(t),A.d(t,"graphql",function(){return C}),A.d(t,"StaticQueryContext",function(){return d}),A.d(t,"StaticQuery",function(){return m});var a=A(0),n=A.n(a),r=A(8),i=A.n(r),o=A(146),u=A.n(o);A.d(t,"Link",function(){return u.a}),A.d(t,"withPrefix",function(){return o.withPrefix}),A.d(t,"navigate",function(){return o.navigate}),A.d(t,"push",function(){return o.push}),A.d(t,"replace",function(){return o.replace}),A.d(t,"navigateTo",function(){return o.navigateTo});var g=A(34);A.d(t,"waitForRouteChange",function(){return g.c});var l=A(148),s=A.n(l);A.d(t,"PageRenderer",function(){return s.a});var c=A(35);A.d(t,"parsePath",function(){return c.a});var d=n.a.createContext({}),m=function(e){return n.a.createElement(d.Consumer,null,function(t){return e.data||t[e.query]&&t[e.query].data?(e.render||e.children)(e.data?e.data.data:t[e.query].data):n.a.createElement("div",null,"Loading (StaticQuery)")})};function C(){throw new Error("It appears like Gatsby is misconfigured. Gatsby related `graphql` calls are supposed to only be evaluated at compile time, and then compiled away,. Unfortunately, something went wrong and the query was left in the compiled code.\n\n.Unless your site has a complex or custom babel/Gatsby configuration this is likely a bug in Gatsby.")}m.propTypes={data:i.a.object,query:i.a.string.isRequired,render:i.a.func,children:i.a.func}},148:function(e,t,A){var a;e.exports=(a=A(150))&&a.default||a},149:function(e){e.exports={data:{site:{siteMetadata:{title:"Ardynia for ArduBoy"}}}}},150:function(e,t,A){"use strict";A.r(t);var a=A(0),n=A.n(a),r=A(8),i=A.n(r),o=A(36),u=A(1),g=function(e){var t=e.location,A=u.default.getResourcesForPathname(t.pathname);return n.a.createElement(o.a,{location:t,pageResources:A})};g.propTypes={location:i.a.shape({pathname:i.a.string.isRequired}).isRequired},t.default=g},151:function(e,t,A){},153:function(e,t,A){},155:function(e,t,A){"use strict";var a=A(149),n=A(0),r=A.n(n),i=A(156),o=A.n(i),u=A(8),g=A.n(u),l=A(157),s=A.n(l),c=A(147),d=(A(50),A(151),["updates","contact"]),m=function(e){return e.siteTitle,r.a.createElement("nav",{className:"header"},r.a.createElement("ul",null,r.a.createElement("li",null,r.a.createElement(c.Link,{to:"/"},"home")),d.map(function(e){return r.a.createElement("li",null,r.a.createElement(c.Link,{to:"/"+e},e))})))},C=(A(153),function(e){var t=e.className,A=e.children,n=o()("layout",t);return r.a.createElement(c.StaticQuery,{query:"2262439644",render:function(e){return r.a.createElement(r.a.Fragment,null,r.a.createElement(s.a,{title:e.site.siteMetadata.title,meta:[{name:"description",content:e.site.siteMetadata.title},{name:"keywords",content:e.site.siteMetadata.keywords}]},r.a.createElement("html",{lang:"en"})),r.a.createElement(m,{siteTitle:e.site.siteMetadata.title}),r.a.createElement("div",{className:"layoutContainer"},r.a.createElement("div",{className:n},A)))},data:a})});C.propTypes={children:g.a.node.isRequired},t.a=C},171:function(e,t,A){},173:function(e,t){e.exports="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAN0AAABhCAYAAABSzKQUAAACSElEQVR4nO3dUU7DQAwE0A3i/lcuv4AqhWh3xw557wAkrTpyBiftMcZ4DSDms/oEYNbrdW1uHMex6Uz+5qP06PBAQgdhQgdhx/CPFG7maoc7k+54Jh2ECR2ECR2E6XS0N7uH67bHM+kgTOggTOggTKejnd0drLrjmXQQJnQQJnQQ5nk6bme2Y83u8WaZdBAmdBAmdBCm03E7vzvY7j3daiYdhAkdhAkdhL2993L2mvfsGnv3NXW3a/zV57P7/e32PFq35+lm/55JB2FCB2FCB2GfY9TvLVab3eOs1u18dlv9eq92tOoOesakgzChgzChg7C3917O7ilmr+lX70n+2/k8XfUecbZjmnQQJnQQJnQQ5nk6tjvrsNV7vTSTDsKEDsKEDsJ0uobSnaTbnrB6j7n7+CYdhAkdhAkdhOl0N9Rt73TV3c9/lkkHYUIHYUIHYTody3W/97GaSQdhQgdhQgdhbztd9TX46uN3u7fwqtUd6e7vR9rqz6NJB2FCB2FCB2GP2NNVP5/1dPZ2P5l0ECZ0ECZ0ELbltwxmVR8fvlv9eTTpIEzoIEzoIOwRe7pZ7gVda/dvGXRn0kGY0EGY0EGYThfw3zvKrKe9PyYdhAkdhAkdhB1jDDcycmtX96jVHdKkgzChgzChgzB7OsqddbLqDraaSQdhQgdhQgdhOh3tze7hun2njkkHYUIHYUIHYe69pJ3q71XdzaSDMKGDMKGDMHs6yu3+XlF7Ong4oYMwoYMwnY72rv4+XLcO95tJB2FCB2FCB2FfjzHB0JGJLtQAAAAASUVORK5CYII="},174:function(e,t,A){e.exports=A.p+"static/crossWater-a03d9bde90b64fbf538432dfaa4f8579.mp4"},175:function(e,t,A){e.exports=A.p+"static/goIntoDungeon-f37d1fefb5c468ee725f78eeb695593f.mp4"},176:function(e,t){e.exports="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAQAAAACACAYAAADktbcKAAADPklEQVR4nO3d3W6jMBgEUFj1/V+ZvVm6Uipih/Lnb865q5ImNJXGgzHOPE3TMj3Ysrw/vHmedz1v/fn1fVqvt/V7rfc9ylmfR+t51PTn7gMA7vN19wHstTUyfTpCt15/qzGc9b699o7gRzUbatAAINgwDeDTc9GrR7C7RsxWE+g9LiN+Jg0Agg3TAI4+d2097/Xx1lzAU2fL984BkEEDgGDz9PB1AMB5NAAIJgAgmACAYI+/CjDK9emrZtFH+TyO5irFOTQACPb4BrB66ghw9wrA6lIbz1U0AAgmACCYAIBgw8wBvOo9N2ydKx/1OjAiDQCCDdsAVr+9G7B3ZP/0+TACDQCCDd8AVr27+hrJ4T8NAIKVaQC9u+S22DGHJBoABCvTAHrnAHp/HxJoABCsTAM4ag4AkmgAEGz4BmDEh/00AAg2fAP41NZcQdXZ/9a6hrMf59k0AAg2bAP47QhjhAINAKIJAAgmACDYsHMA9GnNdZz9OM+mAUAwDaC4s6/TWwcwNg0AgmkAL1JWCMI0aQAQTQP4x45AJNIAIFh8A3g956/WBM7+O6p8Tqk0AAgW2wBauwhXaQJ3rwOwTuDZNAAIFtsAVvYUvIZdm59JA4Bg8Q2Aaxj5n0kDgGCxDSBllvrudQBVPseqNAAIFtsAVtVHqOoNh9/RACCYAIBgAgCCNecAenfIsZMOjEcDgGCbDaD3brgqd81V5f/COxoABPvRAHrvi7/6/nlryfexDoB3NAAI9t0AenfIWV21k46RCs6jAUCw5hzAFufkMD4NAILF3w1YnTkU3tEAINh3A/h0hxzXl+9lDoYjaAAQbJ6myVACoTQACCYAIJgAgGACAIIJAAgmACCYAIBgAgCCCQAIJgAgmACAYAIAggkACCYAIJgAgGACAIIJAAgmACCYAIBgAgCCCQAIJgAgmACAYN3fDuwbf6AeDQCCbQbAPM9GfShOA4BgP+YAVr59FurTACDY5rcDrw3APADUpQFAsGYALMtiPgCK0gAgmACAYAIAgm1eBQDq0wAgmACAYAIAggkACCYAIJgAgGACAIIJAAgmACCYAIBgAgCCCQAIJgAgmACAYAIAggkACCYAINhfNRMaSJo/orEAAAAASUVORK5CYII="},177:function(e,t){e.exports="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAQAAAACACAYAAADktbcKAAAElElEQVR4nO3d0XabOhQFQOjq//+y+1L7rgtVJEAI8J55C3VyGptIGyGJ+fV6vaZpmuZ5nkb6W/ZDffUT64+uu/Tr0urApeZpml7TtG4RPy9YtFCl1zUXLLR46quv/n//vvXrvSQACPZ7eaDU4i2P7215ai2X+uon168ljKMJZEkCgGCrBACMV7u2733t/yYBQLBVAtjbwvQapVRf/eT6tdf3njcgAUCw4hjA1tHI3vcr1Vc/uf4oEgAE+8wEPKo2k+rsllB99ZPr7yUBQLBVAtg602jv3OpSi6i++sn1R5MAINjnLkDv+6ZX3X9VX/0n1r+KBADBTlsLULsGOruFVF/95PqtJAAIVk0AreunW6+Ftl5rqa9+cv2zSQAQrLoW4Ko5zuqrn1x/FAkAglX3A2j9uuToNZf66ifVH00CgGDFXYF7tYStLaX66ifX3/r/60UCgGDzNP38ZKDNP7Bw33Pv69RXP6l+7fslAKCb+fW3iRk9Snl2y6a++k+ov3fMoRcJAIJ9xgC26nXNBMlqPbwxAOA0xZmAJe8WaOv9VaDd1hmHe0kAEGzznoB3n9sM32BUwpYAINhpewIC240eU5MAIFixAXi9Xkb4aTbPs3GhB5IAINjmHYHgX3qtx0911d+XBADBNu8IRJa9n7/z6BkkAAjWPAZAlqM9+PJ1zqN7kgAgWHUMYHmcDJJgBgkAgq12BGrt+fUIcNzVyVoCgGDFMQDowRjCvUkAEMyegJzCTMBnkAAg2GpPwLfRTyjhu+j5n0ECgGBWA3Iq5829SQAQ7JMASj29Fhy+lwQAwXbPBJQM4PkkAAimAYBgGgAIZi0ABJMAINhqLUDtLoC1APzL0fNBkryGBADBVmMAsMXenn+ZJI0pXUMCgGDFBOBa/57u0lMePS9Kq07v8vulkAAgWPOzASWBsZ62OrN0ntSOcy0JAILZEehmer3/Z39utWRYSi7L10uW15IAIFjzGABjHL3mH5Xgjv5cPf89SAAQrDoGsDzOvY1OcMs6EuOzSAAQbJ6m6X9NdmvPr6X/bq0JovX+/tYEmXJ+XZ2sJQAItkoArVJa6KVRPdnWa/ize5KtSaD1+9MTpgQAXKY6BrD6htA53aNm5G29j997tL/Xzj5Hf+/a8W8hAQCXWe0J+Fbria5uue6i98y7q2di+nyzSAAQzGrAm2p9v0f12K2j+EdX+6WOMV1FAoBgnwTwtB1o7uIu79dVq/3OWjPivBtDAoBgZgJuZE47PV19t0UCgGCeDLSRHp1vIgFAsOKegCWe4ALn6bWfQisJAIKt1gK0ruu+evQSvtmohC0BQDB3AeCGRo2tSQAQrJgAXOtv464IPYzed0MCgGDNzwaUBH42as8+spz99ycBQDA7AlX02g04/X3kniQACNY8BpDmaA9+l52CeKZRY24SAASrjgEsj6eQhEggAUCw6rMB05/eCme6OllLABCsOAZAH8YQuDMJAILZE/AkZgLyBBIABFvtCfhW68GMFfxMz88TSAAQzGrAk3nfuDMJAIJ9EkCpp9eDwfeSACDY7pmAkgE8nwQAwf4AiaWQsp+9l0wAAAAASUVORK5CYII="}}]);
//# sourceMappingURL=component---src-pages-index-js-52adf609a2265c532eb0.js.map