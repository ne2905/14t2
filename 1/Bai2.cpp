body {
    font-family: Arial, sans-serif;
    margin: 0;
    background-color: #f0f0f0;
}

.container {
    width: 90%;
    margin: 0 auto;
    background: white;
    box-shadow: 0 0 10px gray;
}

/* HEADER */
header {
    display: flex;
    align-items: center;
    justify-content: space-between;
    background: #dcdcdc;
    padding: 10px 20px;
}

.header-left {
    display: flex;
    align-items: center;
    gap: 10px;
}

.logo {
    width: 80px;
    height: 80px;
}

.vnu-text h1 {
    margin: 0;
    font-size: 40px;
    font-weight: bold;
    color: darkgreen;
    line-height: 1;
}

.vnu-text p {
    margin: 0;
    font-size: 14px;
    color: #333;
}

.header-center {
    flex-grow: 1;
    text-align: center;
}

.header-center h2 {
    margin: 0;
    font-size: 22px;
    font-weight: bold;
}

.header-center h3 {
    margin: 0;
    font-size: 18px;
}

/* MENU */
nav {
    background: gray;
}

.menu {
    list-style: none;
    margin: 0;
    padding: 0;
    display: flex;
}

.menu li {
    position: relative;
}

.menu > li {
    flex: 1;
}

.menu a {
    display: block;
    padding: 10px;
    color: white;
    text-align: center;
    text-decoration: none;
}

.menu a:hover {
    background: darkgray;
}

/* Submenu */
.submenu {
    display: none;
    position: absolute;
    background: #ddd;
    list-style: none;
    padding: 0;
    margin: 0;
    width: 150px;
    z-index: 999;
}

.submenu li a {
    color: black;
    padding: 8px;
    text-align: left;
}

.menu li:hover .submenu {
    display: block;
}

/* MAIN CONTENT */
main {
    display: flex;
    padding: 10px;
    gap: 10px;
}

.left, .center, .right {
    background: #f9f9f9;
    padding: 10px;
}

.left {
    width: 20%;
}

.center {
    width: 60%;
}

.right {
    width: 20%;
}

.student {
    display: flex;
    align-items: flex-start;
    margin-bottom: 10px;
}

.avatar {
    width: 80px;
    height: 80px;
    margin-right: 10px;
}

/* BOX BÊN PHẢI */
.box {
    background: #fff;
    border: 1px solid #ccc;
    margin-bottom: 10px;
    padding: 8px;
}

.box h4 {
    background: #ccc;
    margin: -8px -8px 8px -8px;
    padding: 6px;
    text-align: center;
}

.box table {
    width: 100%;
}

.box input {
    width: 95%;
    margin-bottom: 5px;
}

.box button {
    width: 100%;
    background: gray;
    color: white;
    border: none;
    padding: 5px;
    cursor: pointer;
}

/* FOOTER */
footer {
    background: #dcdcdc;
    text-align: center;
    padding: 10px;
    font-weight: bold;
}
