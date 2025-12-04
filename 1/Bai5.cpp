<!DOCTYPE html>
<html lang="vi">
<head>
<meta charset="UTF-8">
<title>PhovanQuyen_90476</title>

<style>
/* ===== RESET ===== */
body{
    margin:0;
    font-family:Arial;
}

/* ===== LAYOUT CHUNG - CÂU 1 ===== */
#container{
    width:1000px;
    margin:auto;
    border:1px solid #333;
}

/* HEADER */
header{
    background:blue;
    height:120px;
    display:flex;
    align-items:center;
    justify-content:space-between;
    padding:10px;
}

/* ===== HEADER – CÂU 2 ===== */
header img{
    height:100%;
}
header h1{
    background:yellow;
    color:black;
    padding:10px 20px;
}
header h1:hover{
    color:red;
}

/* MENU – CÂU 3 */
nav{
    background:blue;
}
nav ul{
    list-style:none;
    padding:0;
    margin:0;
    display:flex;
}
nav ul li{
    position:relative;
}
nav ul li a{
    display:block;
    padding:12px 20px;
    color:black;
    text-decoration:none;
    font-size:16px;
    font-weight:bold;
}
nav ul li:hover{
    background:green;
}

/* MENU CẤP 2 */
nav ul li ul{
    position:absolute;
    left:0;
    top:100%;
    display:none;
    background:green;
    width:180px;
}
nav ul li:hover ul{
    display:block;
}
nav ul li ul li{
    width:100%;
}
nav ul li ul li a{
    color:white;
}

/* ===== BODY ===== */
#main{
    display:flex;
}

/* SIDEBAR 1 */
#sidebar1{
    width:200px;
    border-right:1px solid black;
    text-align:center;
    padding:10px;
}
#sidebar1 img{
    width:180px;
}

/* CONTENT – CÂU 4 */
#content{
    flex:1;
    padding:10px;
    display:grid;
    grid-template-columns:repeat(3,1fr);
    gap:10px;
}
.item{
    font-size:14px;
    color:black;
    text-align:center;
}
.item p:hover{
    color:#EAFB6F;
}
.item img{
    width:100px;
}

/* SIDEBAR 2 */
#sidebar2{
    width:200px;
    border-left:1px solid black;
    text-align:center;
    padding:10px;
}
#sidebar2 img{
    width:180px;
}

/* ===== FOOTER – CÂU 5 ===== */
footer{
    background:rgb(0,0,255);
    color:white;
    font-size:14px;
    text-align:center;
    padding:10px;
}

</style>
</head>

<body>

<div id="container">

    <!-- HEADER -->
    <header>
        <img src="https://via.placeholder.com/100" alt="logo">
        
        <h1>SIÊU THỊ DÀNH CHO NGƯỜI TIÊU DÙNG THÔNG THÁI</h1>
        
        <img src="https://via.placeholder.com/100" alt="logo">
    </header>

    <!-- MENU -->
    <nav>
        <ul>
            <li><a href="#">Trang chủ</a></li>
            <li>
                <a href="#">Sản phẩm mới</a>
                <ul>
                    <li><a href="#">Quần áo nam</a></li>
                    <li><a href="#">Quần áo nữ</a></li>
                    <li><a href="#">Quần áo trẻ em</a></li>
                    <li><a href="#">Quần áo sinh viên</a></li>
                    <li><a href="#">Quần áo thời trang</a></li>
                </ul>
            </li>
            <li><a href="#">Hỗ trợ khách hàng</a></li>
            <li><a href="#">Đồ gia dụng</a></li>
