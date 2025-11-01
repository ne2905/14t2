<!DOCTYPE html>
<html lang="vi">
<head>
<meta charset="UTF-8">
<title>Tính lương nhân viên 2023</title>
<style>
    body { font-family: Arial; width: 400px; margin: 30px auto; }
    h2 { text-align: center; }
    table { border-collapse: collapse; width: 100%; }
    td { border: 1px solid black; padding: 5px; }
    input { width: 95%; padding: 4px; }
    button { width: 80px; padding: 5px; margin: 5px; }
    .btns { text-align: center; }
</style>
</head>
<body>
    <h2>TÍNH LƯƠNG NHÂN VIÊN 2023</h2>
    <table>
        <tr><td>Tên nhân viên</td><td><input id="ten"></td></tr>
        <tr><td>Ngày công</td><td><input id="ngaycong" type="number"></td></tr>
        <tr><td>Lương ngày</td><td><input id="luongngay" readonly></td></tr>
        <tr><td>Lương tháng</td><td><input id="luongthang" readonly></td></tr>
        <tr><td>Xếp loại nhân viên</td><td><input id="xeploai" readonly></td></tr>
        <tr><td>Thưởng</td><td><input id="thuong" readonly></td></tr>
        <tr><td>Thực lĩnh</td><td><input id="thuclinh" readonly></td></tr>
    </table>

    <div class="btns">
        <button onclick="tinhLuong()">Tính tiền</button>
        <button onclick="xoa()">Xóa</button>
    </div>

<script>
function tinhLuong() {
    let ngaycong = parseInt(document.getElementById('ngaycong').value);
    if (isNaN(ngaycong) || ngaycong <= 0) {
        alert("Vui lòng nhập số ngày công hợp lệ!");
        return;
    }

    let luongngay = 8 * 20000;
    let luongthang = ngaycong * luongngay;
    let thuong = 0;
    let xeploai = "";

    if (ngaycong > 25) {
        xeploai = "A";
        thuong = 500000;
    } else if (ngaycong >= 20) {
        xeploai = "B";
        thuong = 300000;
    } else {
        xeploai = "C";
        thuong = 0;
    }

    let thuclinh = luongthang + thuong;

    document.getElementById('luongngay').value = luongngay.toLocaleString();
    document.getElementById('luongthang').value = luongthang.toLocaleString();
    document.getElementById('xeploai').value = xeploai;
    document.getElementById('thuong').value = thuong.toLocaleString();
    document.getElementById('thuclinh').value = thuclinh.toLocaleString();
}

function xoa() {
    document.querySelectorAll("input").forEach(i => i.value = "");
}
</script>
</body>
</html>
