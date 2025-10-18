<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <title>Nhà Việt Xanh</title>
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            font-family: Arial, sans-serif;
        }

        .container {
            width: 90%;
            margin: auto;
        }

        /* Header */
        header {
            background-color: #444;
            color: white;
            padding: 10px 0;
        }

        .logo {
            display: flex;
            align-items: center;
            padding-left: 20px;
        }

        .logo img {
            width: 50px;
            height: 50px;
            margin-right: 10px;
        }

        /* Menu */
        .menu {
            list-style: none;
            display: flex;
            background-color: #333;
        }

        .menu li {
            position: relative;
        }

        .menu a {
            display: block;
            padding: 10px 20px;
            color: white;
            text-decoration: none;
        }

        .menu a:hover {
            background-color: #666;
        }

        /* Menu cấp 2 */
        .submenu {
            display: none;
            position: absolute;
            top: 100%;
            left: 0;
            background-color: #555;
            list-style: none;
            min-width: 150px;
        }

        .submenu li a {
            padding: 8px 15px;
        }

        .has-submenu:hover .submenu {
            display: block;
        }

        /* Content */
        main {
            display: flex;
            margin: 20px 0;
        }

        .left {
            width: 70%;
        }

        .left h3 {
            background-color: #ddd;
            padding: 10px;
        }

        .left .item {
            display: flex;
            align-items: center;
            margin: 10px;
        }

        .left .item img {
            width: 60px;
            height: 60px;
            margin-right: 10px;
        }

        .right {
            width: 30%;
            text-align: center;
        }

        .right h3 {
            background-color: #ddd;
            padding: 10px;
        }

        .right img {
            width: 90%;
            margin: 10px 0;
        }

        .search input {
            width: 90%;
            padding: 5px;
        }

        /* Footer */
        footer {
            background-color: #444;
            color: white;
            text-align: center;
            padding: 10px;
        }
    </style>
</head>
<body>
    <div class="container">
        <!-- Header -->
        <header>
            <div class="logo">
                <img src="logo.jpg" alt="Logo">
                <h2>NHÀ VIỆT XANH</h2>
            </div>
            <nav>
                <ul class="menu">
                    <li><a href="#">Trang chủ</a></li>
                    <li class="has-submenu"><a href="#">Biệt thự</a>
