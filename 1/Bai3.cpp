<!DOCTYPE html>
<html lang="vi">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>HTC - Hiệp Thành Company</title>
  <style>
    * {
      margin: 0;
      padding: 0;
      box-sizing: border-box;
      font-family: Arial, sans-serif;
    }

    body {
      background: #f6f6f6;
    }

    .container {
      width: 90%;
      margin: 0 auto;
      background: #fff;
    }

    /* HEADER */
    header {
      position: relative;
      background: #eee;
      padding: 20px 0 15px 0;
      text-align: center;
    }

    header h2 {
      font-size: 22px;
      color: #004d26;
      font-weight: bold;
      letter-spacing: 1px;
    }

    .logo {
      position: absolute;
      left: 30px; /* 👈 đưa sang góc trái */
      top: 15px;
      font-size: 32px;
      font-weight: bold;
      color: #006633;
    }

    /* MENU */
    nav {
      background: #004d26;
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
      color: #fff;
      padding: 12px 18px;
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
      background: #00994d;
      list-style: none;
      display: none;
      min-width: 160px;
      z-index: 100;
    }

    .submenu li a {
      padding: 10px;
      color: #fff;
      display: block;
    }

    .submenu li a:hover {
      background: #33cc7a;
    }

    .menu li:hover .submenu {
      display: block;
    }

    /* BANNER */
    .banner {
      position: relative;
      width: 100%;
    }

    .banner img {
      width: 100%;
      height: 400px;
      object-fit: cover;
      display: block;
    }

    .banner-text {
      position: absolute;
      bottom: 40px;
      right: 30px; /* 👈 chuyển sang góc phải */
      background: rgba(0, 0, 0, 0.55);
      color: #fff;
      padding: 20px 25px;
      border-radius: 6px;
      max-width: 40%;
      text-align: right; /* 👈 căn chữ sang phải */
    }

    .banner-text h2 {
      font-size: 26px;
      margin-bottom: 8px;
      font-weight: bold;
      letter-spacing: 1px;
    }

    .banner-text p {
      font-size: 15px;
      line-height: 1.4;
    }

    /* CONTENT */
    .info {
      display: flex;
      justify-content: space-between;
      padding: 30px;
      gap: 20px;
    }

    .card {
      background: #fafafa;
      border: 1px solid #ddd;
      width: 32%;
      border-radius: 8px;
      box-shadow: 0 2px 6px rgba(0,0,0,0.1);
      overflow: hidden;
      text-align: center;
    }

    .card img {
      width: 100%;
      height: 180px;
      object-fit: cover;
    }

    .card-content {
      padding: 15px;
    }

    .card-content h3 {
      color: #006633;
      margin-bottom: 10px;
      text-transform: uppercase;
    }

    .card-content p {
      font-size: 14px;
      color: #333;
      margin-bottom: 15px;
      line-height: 1.4;
    }

    .btn {
      display: inline-block;
      background: #006633;
      color: #fff;
      padding: 8px 14px;
      text-decoration: none;
      border-radius: 4px;
      font-size: 13px;
    }

    .btn:hover {
      background: #00994d;
    }

    /* FOOTER */
    footer {
      background: #004d26;
      color: #fff;
      text-align: center;
      padding: 15px;
      font-size: 14px;
    }
  </style>
</head>
<body>
  <div class="container">

    <!-- HEADER -->
    <header>
      <div class="logo">HTC</div> <!-- 👈 logo nằm bên trái -->
      <h2>CÔNG TY TRÁCH NHIỆM HỮU HẠN HIỆP THÀNH</h2>
    </header>

    <!-- MENU 2 CẤP -->
    <nav>
      <ul class="menu">
        <li><a href="#">Giới thiệu</a></li>
        <li><a href="#">Sản phẩm</a>
          <ul class="submenu">
            <li><a href="#">Gạo nếp nương</a></li>
            <li><a href="#">Gạo tấm ĐB</a></li>
            <li><a href="#">Gạo Bắc hương</a></li>
            <li><a href="#">Rau sạch Việt</a></li>
            <li><a href="#">Gạo sàng củ</a></li>
          </ul>
        </li>
        <li><a href="#">Dịch vụ</a></li>
        <li><a href="#">Dự án</a></li>
        <li><a href="#">Tin tức - Sự kiện</a></li>
        <li><a href="#">Album ảnh</a></li>
        <li><a href="#">Tuyển dụng</a></li>
        <li><a href="#">Liên hệ</a></li>
      </ul>
    </nav>

    <!-- CONTENT -->
    <main>
      <div class="banner">
        <img src="https://images.unsplash.com/photo-1501004318641-b39e6451bec6" alt="Banner">
        <div class="banner-text">
          <h2>NÔNG NGHIỆP BỀN VỮNG</h2>
          <p>Hiệp Thành hướng đến phát triển nông nghiệp xanh, an toàn và thân thiện với môi trường, mang lại giá trị bền vững cho cộng đồng.</p>
        </div>
      </div>

      <section class="info">
        <div class="card">
          <img src="https://images.unsplash.com/photo-1504593811423-6dd665756598" alt="Giới thiệu chung">
          <div class="card-content">
            <h3>Giới thiệu chung</h3>
            <p>Hiệp Thành hướng tới việc xây dựng thương hiệu nông sản Việt chất lượng cao, thân thiện với môi trường.</p>
            <a href="#" class="btn">TÌM HIỂU THÊM</a>
          </div>
        </div>

        <div class="card">
          <img src="https://images.unsplash.com/photo-1564518098559-7a0aa67b5f3a" alt="Dự án đầu tư">
          <div class="card-content">
            <h3>Dự án đầu tư</h3>
            <p>Chúng tôi tập trung đầu tư vào nông sản sạch, hữu cơ và phát triển nông nghiệp bền vững cho tương lai.</p>
            <a href="#" class="btn">TÌM HIỂU THÊM</a>
          </div>
        </div>

        <div class="card">
          <img src="https://images.unsplash.com/photo-1606761568499-6b2b7e7a79e2" alt="Sản phẩm chính">
          <div class="card-content">
            <h3>Sản phẩm chính</h3>
            <p>Các dòng gạo và rau sạch đạt tiêu chuẩn VietGAP, phục vụ nhu cầu trong nước và xuất khẩu quốc tế.</p>
            <a href="#" class="btn">TÌM HIỂU THÊM</a>
          </div>
        </div>
      </section>
    </main>

    <!-- FOOTER -->
    <footer>
      <p>&copy; 2025 Hiệp Thành Company Limited - All rights reserved</p>
    </footer>

  </div>
</body>
</html>
