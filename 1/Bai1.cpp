<!DOCTYPE html>
<html lang="vi">
<head>
<meta charset="UTF-8">
<title>Thiết kế Web - Khoa CNTT</title>
<style>
body { font-family: Arial; margin: 0; padding: 0; }
header, footer { background: #ccc; text-align: center; padding: 10px; }
nav { background: #666; }
nav ul { margin: 0; padding: 0; list-style: none; display: flex; }
nav ul li { position: relative; }
nav a {
    color: white; padding: 10px 20px; display: block; text-decoration: none;
}
nav a:hover { background: #333; }

nav ul ul {
    position: absolute;
    top: 100%;
    left: 0;
    background: #888;
    display: none;
    flex-direction: column;
    min-width: 180px;
}
nav ul li:hover > ul { display: flex; }

.content {
    padding: 20px;
    background: #f4f4f4;
    min-height: 300px;
}
footer { background: #444; color: white; }
</style>
</head>
<body>

<header>
    <h1>TRƯỜNG ĐẠI HỌC QUỐC GIA HÀ NỘI</h1>
    <h3>KHOA CÔNG NGHỆ THÔNG TIN</h3>
</header>

<nav>
    <ul>
        <li><a href="#">Trang chủ</a></li>
        <li>
            <a href="#">Khoa CNTT ▼</a>
            <ul>
                <li><a href="#">Bộ môn CNPM</a></li>
                <li><a href="#">Bộ môn KHMT</a></li>
                <li><a href="#">Bộ môn MMT</a></li>
            </ul>
        </li>
        <li><a href="#">Hỗ trợ sinh viên</a></li>
        <li><a href="#">Học online</a></li>
        <li><a href="#">Liên hệ</a></li>
    </ul>
</nav>

<div class="content">
    <h2>Danh sách các khoa</h2>
    <ol>
        <li>Khoa Kinh tế</li>
        <li>Khoa CNTT</li>
    </ol>
    <p>Mùa thi đã đến... 😅</p>
</div>

<footer>
    Bản quyền © Khoa CNTT - ĐHQGHN
</footer>

</body>
</html>
