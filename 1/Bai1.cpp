<!DOCTYPE html>
<html lang="vi">
<head>
<meta charset="UTF-8">
<title>Trang Web</title>
<link rel="stylesheet" href="style.css">
</head>
<body>
<div id="layout">
<header>
  <div id="header-logo">
    <img src="logo1.png" alt="logo1">
    <h2>SIÊU THỊ DÀNH CHO NGƯỜI TIÊU DÙNG THÔNG THÁI</h2>
    <img src="logo2.png" alt="logo2">
  </div>
</header>
<div id="sidebar1">Sidebar 1</div>
<div id="content">
  <div id="menu">
    <a href="#">Trang chủ</a>
    <div class="menu-item">
      <a href="#">Sản phẩm mới</a>
      <div class="submenu">
        <a href="#">Menu cấp 2</a>
      </div>
    </div>
    <a href="#">Hỗ trợ khách hàng</a>
    <a href="#">Đồ gia dụng</a>
    <a href="#">Đồ trẻ em</a>
  </div>

  <h3>Form tính biểu thức</h3>
  <form>
    <label>Nhập số n:</label>
    <input id="n" type="number" min="1" required>
    <label>Kết quả biểu thức:</label>
    <input id="result" type="text" readonly>
    <button type="button" onclick="calc()">Tính</button>
  </form>
</div>
<div id="sidebar2">Sidebar 2</div>
<footer>
  Copy right 2020 by TranAnh Company <br> Liên hệ: 0999988888
</footer>
</div>
<script src="script.js"></script>
</body>
</html>
    
