body {
    font-family: Arial, sans-serif;
    margin: 0;
    background: #f4f4f4;
}

.container {
    width: 95%;
    margin: 10px auto;
    background: white;
    box-shadow: 0 0 10px gray;
}

/* HEADER */
header {
    display: flex;
    align-items: center;
    justify-content: space-between;
    background: #a7a7a7;
    color: black;
    padding: 10px;
}

.logo-left, .logo-right {
    width: 80px;
    height: 80px;
}

.header-text {
    text-align: center;
    flex-grow: 1;
}

.header-text h2, .header-text h3 {
    margin: 0;
}

/* BỐ CỤC CHÍNH */
.main {
    display: flex;
}

/* MENU TRÁI */
.sidebar {
    width: 20%;
    background: #d3d3d3;
}

.menu {
    list-style: none;
    margin: 0;
    padding: 0;
}

.menu li {
    position: relative;
}

.menu a {
    display: block;
    padding: 10px;
    color: black;
    text-decoration: none;
    border-bottom: 1px solid #aaa;
}

.menu a:hover {
    background: gray;
    color: white;
}

/* SUBMENU */
.submenu {
    display: none;
    position: absolute;
    top: 0;
    left: 100%;
    background: #eee;
    width: 150px;
    list-style: none;
    padding: 0;
    margin: 0;
}

.submenu a {
    border: none;
}

.menu li:hover .submenu {
    display: block;
}

/* NỘI DUNG GIỮA */
.content {
    width: 60%;
    padding: 10px;
}

.news {
    display: flex;
    margin-bottom: 10px;
}

.avatar {
    width: 80px;
    height: 80px;
    margin-right: 10px;
}

/* THANH PHẢI */
.right {
    width: 20%;
    background: #f9f9f9;
    padding: 10px;
    border-left: 1px solid #ccc;
}

.right h4 {
    background: #ccc;
    padding: 5px;
    text-align: center;
    margin: 0 0 5px 0;
}

.search input {
    width: 100%;
    margin-bottom: 5px;
}

.search button {
    width: 100%;
    background: gray;
    color: white;
    border: none;
    padding: 5px;
    cursor: pointer;
}

/* FOOTER */
footer {
    background: #a7a7a7;
    text-align: center;
    padding: 10px;
    font-weight: bold;
}
