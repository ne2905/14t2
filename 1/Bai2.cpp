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
    background: #ccc;
    padding: 10px;
}

.logo {
    width: 80px;
    height: 80px;
    margin-right: 15px;
}

.header-text h2, .header-text h3 {
    margin: 0;
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

/* FOOTER */
footer {
    background: #ccc;
    text-align: center;
    padding: 10px;
    font-weight: bold;
}
