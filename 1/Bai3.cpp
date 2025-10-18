<!DOCTYPE html>
<html lang="vi">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Nhà Việt Xanh</title>
  <style>
    * {
      margin: 0;
      padding: 0;
      box-sizing: border-box;
      font-family: Arial, sans-serif;
    }

    body {
      background: #f5f5f5;
    }

    .container {
      width: 95%;
      margin: 0 auto;
      background: #fff;
      box-shadow: 0 0 10px rgba(0,0,0,0.1);
    }

    /* HEADER */
    header {
      display: flex;
      justify-content: space-between;
      align-items: center;
      padding: 15px 20px;
      background: #004d26;
      color: #fff;
    }

    .logo {
      display: flex;
      align-items: center;
      gap: 10px;
    }

    .logo img {
      width: 50px;
      height: 50px;
      object-fit: cover;
      border-radius: 5px;
    }

    .logo h1 {
      font-size: 22px;
      letter-spacing: 1px;
    }

    .search {
      display: flex;
      align-items: center;
      gap: 5px;
    }

    .search input {
      padding: 5px 8px;
      border: none;
      border-radius: 4px;
      outline: none;
    }

    /* MENU */
    nav {
      background: #2c2c2c;
    }

    .menu {
      list-style: none;
      display: flex;
      justify-content: center;
    }

    .menu li {
      position: relative;
    }

    .menu li a {
      display: block;
      padding: 12px 20px;
      color: #fff;
      text-decoration: none;
    }

    .menu li a:hover {
      background: #00994d;
    }

    /* SUBMENU */
    .submenu {
      position: absolute;
      top: 100%;
      left: 0;
      list-style: none;
      background: #444;
      display: none;
      min-width: 160px;
      z-index: 10;
    }

    .submenu li a {
      padding: 10px;
      color: #fff;
      display: block;
    }

    .submenu li a:hover {
      background: #00994d;
    }

    .menu li:hover .submenu {
      display: block;
    }

    /* CONTENT */
    main {
      display: flex;
      padding: 20px;
      gap: 20px;
    }

    /* LEFT COLUMN */
    .left {
      width: 25%;
    }

    .left h2 {
      background: #004d26;
      color: #fff;
      padding: 10px;
      text-align: center;
      font-size: 18px;
    }

    .left img {
      width: 100%;
      height: 180px;
      object-fit: cover;
      margin-bottom: 10px;
    }

    .left ul {
      list-style: none;
      padding-left: 10px;
    }

    .left ul li {
      padding: 6px 0;
      border-bottom: 1px solid #ddd;
    }

    .left ul li a {
      text-decoration: none;
      color: #333;
    }

    .left ul li a:hover {
      color: #00994d;
    }

    /* CENTER COLUMN */
    .center {
      width: 50%;
    }

    .center h2 {
      font-size: 18px;
      color: #004d26;
      margin-bottom: 10px;
    }

    .item {
      display: flex;
      align-items: center;
      gap: 10px;
      margin-bottom: 10px;
      border-bottom: 1px solid #ddd;
      padding-bottom: 10px;
    }

    .item img {
      width: 100px;
      height: 70px;
      object-fit: cover;
    }

    .item p {
      font-size: 14px;
      color: #333;
    }

    /* RIGHT COLUMN */
    .right {
      width: 25%;
    }

    .right h2 {
      background: #004d26;
      color: #fff;
      padding: 10px;
      text-align: center;
      font-size: 18px;
      margin-bottom: 10px;
    }

    .right img {
      width: 100%;
      height: 150px;
      object-fit: cover;
      display: block;
      margin-bottom: 10px;
    }

    /* FOOTER */
    footer {
      background: #2c2c2c;
      color: #fff;
      text-align: center;
      padding: 10px;
      font-size: 14px;
    }
  </style>
</head>
<body>
  <div class="container">

    <!-- HEADER -->
    <header>
      <div class="logo">
        <img src="https://images.unsplash.com/photo-1494790108377-be9c29b29330" alt="Logo">
        <h1>NHÀ VIỆT XANH</h1>
      </div>
      <div class="search">
        <input type="text" placeholder="Search...">
      </div>
    </header>

    <!-- MENU -->
    <nav>
      <ul class="menu">
        <li><a href="#">Trang chủ</a></li>
        <li><a href="#">Biệt thự</a>
          <ul class="submenu">
            <li><a href="#">Phòng ngủ</a></li>
            <li><a href="#">Phòng khách</a></li>
            <li><a href="#">Nhà tắm</a></li>
            <li><a href="#">Cầu thang</a></li>
          </ul>
        </li>
        <li><a href="#">Nhà phố</a></li>
        <li><a href="#">Nhà cấp 4</a></li>
        <li><a href="#">Nhà vườn</a></li>
        <li><a href="#">Nội thất</a></li>
      </ul>
    </nav>

    <!-- CONTENT -->
    <main>
      <!-- LEFT -->
      <div class="left">
        <h2>MAU BIỆT THỰ</h2>
        <img src="https://images.unsplash.com/photo-1560184897-91e1c56e4139" alt="Mẫu biệt thự">
        <ul>
          <li><a href="#">Phòng ngủ</a></li>
          <li><a href="#">Phòng khách</a></li>
          <li><a href="#">Nhà tắm</a></li>
          <li><a href="#">Cầu thang</a></li>
        </ul>
      </div>

      <!-- CENTER -->
      <div class="center">
        <h2>BTS mẫu thiết kế nhà 2 tầng 3 phòng ngủ</h2>
        <div class="item">
          <img src="https://images.unsplash.com/photo-1507089947368-19c1da9775ae" alt="">
          <p>BTS mẫu thiết kế nhà 2 tầng 3 phòng ngủ tiện nghi và hiện đại.</p>
        </div>
        <div class="item">
          <img src="https://images.unsplash.com/photo-1580587771525-78b9dba3b914" alt="">
          <p>BTS mẫu thiết kế nhà 2 tầng 3 phòng ngủ phong cách châu Âu.</p>
        </div>
        <div class="item">
          <img src="https://images.unsplash.com/photo-1600585154340-be6161a56a0c" alt="">
          <p>BTS mẫu thiết kế nhà 2 tầng 3 phòng ngủ không gian mở và thoáng mát.</p>
        </div>
      </div>

      <!-- RIGHT -->
      <div class="right">
        <h2>MAU NHÀ BẾP</h2>
        <img src="https://images.unsplash.com/photo-1556911220-e15b29be8c8f" alt="">
        <img src="https://images.unsplash.com/photo-1560185008-5b987d2e5d6c" alt="">
      </div>
    </main>

    <!-- FOOTER -->
    <footer>
      0833.000.355 | nhavietxanhcompany@gmail.com
    </footer>

  </div>
</body>
</html>
