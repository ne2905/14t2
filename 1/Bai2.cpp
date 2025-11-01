/* RESET MINIMAL */
* { box-sizing: border-box; }
body { margin:0; font-family: "Arial", sans-serif; background:#f3f4f6; color:#222; }

/* LƯỚI CHUNG */
.container {
    width: 94%;
    max-width: 1150px;
    margin: 12px auto;
    background: #fff;
    box-shadow: 0 6px 18px rgba(0,0,0,0.08);
}

/* HEADER */
header {
    display: flex;
    align-items: center;
    justify-content: space-between;
    padding: 12px 18px;
    background: #e6e6e6;
}

/* left (logo + big text) */
.header-left { display:flex; align-items:center; gap:12px; }
.logo { width:72px; height:72px; object-fit:contain; }
.bk-text h1 {
    margin:0; font-size:30px; letter-spacing:1px; color:#0b5a2b; /* màu xanh Bách khoa */
}
.bk-text p { margin:0; font-size:12px; color:#333; }

/* center title */
.header-center { flex:1; text-align:center; }
.header-center h2 { margin:0; font-size:18px; font-weight:700; }
.header-center h3 { margin:4px 0 0 0; font-size:16px; font-weight:600; color:#444; }

/* right tiny login */
.header-right .login {
    display:inline-block;
    padding:8px 12px;
    background:#2f4f4f;
    color:#fff;
    border-radius:4px;
    text-decoration:none;
    font-size:13px;
}

/* MENU */
.main-nav { background:#4b4b4b; }
.menu { list-style:none; margin:0; padding:0; display:flex; }
.menu > li { position:relative; }
.menu > li > a {
    display:block; padding:10px 16px; color:#fff; text-decoration:none; font-weight:600;
}
.menu > li > a:hover { background:#3a3a3a; }

/* Submenu */
.has-sub:hover .submenu { display:block; }
.submenu {
    display:none;
    position:absolute;
    left:0;
    top:100%;
    background:#fff;
    min-width:180px;
    box-shadow:0 6px 12px rgba(0,0,0,0.12);
    list-style:none;
    padding:6px 0;
    z-index:50;
}
.submenu li a { display:block; padding:8px 12px; color:#222; text-decoration:none; }
.submenu li a:hover { background:#f0f0f0; }

/* MAIN LAYOUT */
main { display:flex; gap:12px; padding:14px; }

/* LEFT */
.left { width:20%; background:#fafafa; padding:10px; border-right:1px solid #eee; }
.left h4 { margin:0 0 8px 0; font-size:15px; }
.side-list { list-style:none; padding:0; margin:0; }
.side-list li { margin-bottom:8px; }
.side-list a {
    display:block; padding:8px; text-decoration:none; background:#dedede; color:#111; text-align:center; border-radius:4px;
}
.side-list a:hover { background:#cfcfcf; }

/* CENTER */
.center { width:55%; padding:0 6px; }
.news-item { display:flex; gap:10px; padding:10px 8px; border-bottom:1px solid #f0f0f0; align-items:flex-start; }
.thumb { width:84px; height:84px; object-fit:cover; border-radius:4px; }
.news-text h5 { margin:0 0 6px 0; font-size:16px; }
.news-text p { margin:0; color:#444; font-size:14px; }

/* RIGHT */
.right { width:25%; padding:0 6px; }

/* small login block on top of right column */
.small-login { text-align:right; margin-bottom:8px; }
.small-login a {
    display:inline-block; padding:6px 10px; background:#666; color:#fff; text-decoration:none; border-radius:4px; font-size:13px;
}

/* BOXES */
.box {
    background:#fff;
    border:1px solid #e2e2e2;
    padding:10px;
    margin-bottom:12px;
    border-radius:4px;
    box-shadow: 0 2px 6px rgba(0,0,0,0.02);
}
.box h4 {
    margin:-10px -10px 8px -10px;
    padding:8px;
    background:#efefef;
    text-align:center;
    font-size:15px;
    border-bottom:1px solid #e6e6e6;
}

/* info table */
.info-table { width:100%; border-collapse:collapse; font-size:14px; }
.info-table td { padding:6px 4px; vertical-align:top; }

/* daily news list */
.daily-news { list-style:none; padding:6px 10px; margin:0; }
.daily-news li { margin:8px 0; font-size:14px; }
.daily-news a { color:#0b54a1; text-decoration:none; }
.daily-news a:hover { text-decoration:underline; }

/* search form */
.search-form label { display:block; margin:6px 0 4px; font-size:13px; color:#333; }
.search-form input[type="text"],
.search-form select {
    width:100%; padding:7px 8px; border:1px solid #d1d1d1; border-radius:4px; font-size:14px;
    margin-bottom:6px;
}
.search-form button {
    width:100%; padding:8px; border:none; background:#2f4f4f; color:#fff; border-radius:4px; cursor:pointer;
}

/* FOOTER */
footer {
    background:#e6e6e6; padding:10px 14px; text-align:center; font-weight:600; color:#333;
}

/* RESPONSIVE */
@media (max-width:900px) {
    header { flex-wrap:wrap; text-align:center; }
    .header-left { order:1; width:100%; justify-content:center; }
    .header-center { order:2; width:100%; margin-top:6px; }
    .header-right { order:3; width:100%; margin-top:6px; text-align:center; }
    main { flex-direction:column; }
    .left, .center, .right { width:100%; }
    .main-nav .menu { flex-wrap:wrap; }
}
