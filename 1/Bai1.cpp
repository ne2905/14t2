<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="utf-8" />
    <title>Đại học Bách Khoa Hà Nội - Khoa CNTT</title>
    <meta name="viewport" content="width=device-width,initial-scale=1" />
    <link rel="stylesheet" href="style.css" />
</head>
<body>
    <div class="container">

        <!-- HEADER -->
        <header>
            <div class="header-left">
                <img src="logo.png" alt="Logo Bách Khoa" class="logo">
                <div class="bk-text">
                    <h1>BÁCH KHOA</h1>
                    <p>HANOI UNIVERSITY OF SCIENCE AND TECHNOLOGY</p>
                </div>
            </div>

            <div class="header-center">
                <h2>TRƯỜNG ĐẠI HỌC BÁCH KHOA HÀ NỘI</h2>
                <h3>KHOA CÔNG NGHỆ THÔNG TIN</h3>
            </div>

            <div class="header-right">
                <a href="#" class="login">Đăng ký / Đăng nhập</a>
            </div>
        </header>

        <!-- MENU -->
        <nav class="main-nav">
            <ul class="menu">
                <li><a href="#">Trang chủ</a></li>
                <li class="has-sub"><a href="#">Các Khoa</a>
                    <ul class="submenu">
                        <li><a href="#">Khoa CNTT</a></li>
                        <li><a href="#">Khoa Điện - Điện tử</a></li>
                        <li><a href="#">Khoa Cơ khí</a></li>
                    </ul>
                </li>
                <li><a href="#">Hỗ trợ sinh viên</a></li>
                <li><a href="#">Đào tạo</a></li>
                <li><a href="#">Nghiên cứu</a></li>
                <li><a href="#">Liên hệ</a></li>
            </ul>
        </nav>

        <!-- MAIN LAYOUT -->
        <main>
            <!-- LEFT COLUMN -->
            <aside class="left">
                <h4>Danh mục</h4>
                <ul class="side-list">
                    <li><a href="#">Trang chủ</a></li>
                    <li><a href="#">Giới thiệu</a></li>
                    <li><a href="#">Tuyển sinh</a></li>
                    <li><a href="#">Đào tạo</a></li>
                    <li><a href="#">Hợp tác</a></li>
                    <li><a href="#">Sinh viên</a></li>
                </ul>
            </aside>

            <!-- CENTER COLUMN -->
            <section class="center">
                <article class="news-item">
                    <img src="avatar1.png" alt="Tin 1" class="thumb">
                    <div class="news-text">
                        <h5>Thủ khoa tốt nghiệp K63</h5>
                        <p>Tốt nghiệp xuất sắc với điểm trung bình tích lũy toàn khóa 3.93/4, sinh viên A trở thành thủ khoa đầu ra khóa 63.</p>
                    </div>
                </article>

                <article class="news-item">
                    <img src="avatar2.png" alt="Tin 2" class="thumb">
                    <div class="news-text">
                        <h5>Hội thảo CNTT - startups</h5>
                        <p>CLB Tin tổ chức hội thảo kết nối sinh viên với doanh nghiệp công nghệ trong nước và quốc tế.</p>
                    </div>
                </article>

                <article class="news-item">
                    <img src="avatar3.png" alt="Tin 3" class="thumb">
                    <div class="news-text">
                        <h5>Hướng dẫn đăng ký học phần</h5>
                        <p>Thời gian đăng ký học phần học kỳ I đã được mở. Sinh viên chú ý lịch và thủ tục đăng ký trực tuyến.</p>
                    </div>
                </article>
            </section>

            <!-- RIGHT COLUMN -->
            <aside class="right">

                <!-- Topping nhỏ: Đăng ký/Đăng nhập (nằm trên cùng) -->
                <div class="small-login">
                    <a href="#">Đăng ký / Đăng nhập</a>
                </div>

                <!-- BOX 1: Hỗ trợ trực tuyến -->
                <div class="box">
                    <h4>Hỗ trợ trực tuyến</h4>
                    <table class="info-table">
                        <tr><td>Hotline:</td><td><b>0948 844 000</b></td></tr>
                        <tr><td>Mã:</td><td><b>158708</b></td></tr>
                        <tr><td>Người liên hệ:</td><td><b>Ms. Hương</b></td></tr>
                        <tr><td colspan="2">Hỗ trợ tư vấn &amp; giải đáp thắc mắc sinh viên</td></tr>
                    </table>
                </div>

                <!-- BOX 2: Tin trong ngày -->
                <div class="box">
                    <h4>Tin trong ngày</h4>
                    <ul class="daily-news">
                        <li><a href="#">Lễ tốt nghiệp K63 diễn ra tại hội trường A</a></li>
                        <li><a href="#">Tuyển dụng: Công ty X tuyển kỹ sư CNTT</a></li>
                        <li><a href="#">Workshop: AI &amp; Big Data</a></li>
                        <li><a href="#">Hướng dẫn thủ tục học bổng</a></li>
                    </ul>
                </div>

                <!-- BOX 3: Tìm kiếm -->
                <div class="box">
                    <h4>Tìm kiếm</h4>
                    <form class="search-form" action="#" method="get" onsubmit="return false;">
                        <label>Họ tên</label>
                        <input type="text" name="name" placeholder="Họ và tên">
                        <label>Mã SV</label>
                        <input type="text" name="id" placeholder="Mã sinh viên">
                        <label>Giới tính</label>
                        <select name="gender">
                            <option value="">--Chọn--</option>
                            <option value="male">Nam</option>
                            <option value="female">Nữ</option>
                        </select>
                        <label>Địa chỉ</label>
                        <input type="text" name="addr" placeholder="Quê quán / Địa chỉ">
                        <button type="submit">Tìm kiếm</button>
                    </form>
                </div>

            </aside>
        </main>

        <!-- FOOTER -->
        <footer>
            <p>© Khoa Công Nghệ Thông Tin - Trường Đại học Bách Khoa Hà Nội</p>
        </footer>
    </div>
</body>
</html>
