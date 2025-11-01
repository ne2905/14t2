<!DOCTYPE html>
<html lang="vi">
<head>
<meta charset="UTF-8">
<title>Tính lương nhân viên 2023</title>
<style>
    body { font-family: Arial; width: 420px; margin: 30px auto; }
    h2 { text-align: center; }
    table { border-collapse: collapse; width: 100%; }
    td { border: 1px solid black; padding: 5px; }
    input { width: 95%; padding: 5px; }
    button { width: 90px; padding: 6px; margin: 5px; cursor: pointer; }
    .btns { text-align: center; }
</style>
</head>
<body>

<h2>TÍNH LƯƠNG NHÂN VIÊN 2023</h2>
<table>
    <tr>
        <td>Tên nhân viên</td>
        <td><input id="ten"></td>
    </tr>
    <tr>
        <td>Ngày công</td>
        <td><input id="ngaycong" type="number"></td>
    </tr>
    <tr>
        <td>Lương ngày</td>
        <td><input id="luongngay" readonly></td>
    </tr>
    <tr>
        <td>Lương tháng</td>
        <td><input id="luongthang" readonly></td>
    </tr>
    <tr>
        <td>Xếp loại nhân viên</td>
        <td><input id="xeploai" readonly></td>
    </tr>
    <tr>
        <td>Thưởng</td>
        <td><input id="thuong" readonly></td>
    </tr>
    <tr>
        <td>Thực lĩnh</td>
        <td><input id="thuclinh" readonly></td>
    </tr>
</table>

<div class="btns">
    <button onclick="tinhLuong()">Tính tiền</button>
    <button onclick="xoa()">Xóa</button>
</div>

<script>
function tinhLuong() {
    let ngayCong = parseInt(document.getElementById("ngaycong").value);

    if (isNaN(ngayCong) || ngayCong <= 0) {
        alert("Vui lòng nhập số ngày công hợp lệ!");
        return;
    }

    // Mỗi ngày làm 8 tiếng, mỗi tiếng 20.000
    let luongNgay = 8 * 20000;
    let luongThang = ngayCong * luongNgay;
    let thuong = 0;
    let xepLoai = "";

    if (ngayCong > 25) {
        xepLoai = "A";
        thuong = 500000;
    } else if (ngayCong >= 20) {
        xepLoai = "B";
        thuong = 300000;
    } else {
        xepLoai = "C";
        thuong = 0;
    }

    let thucLinh = luongThang + thuong;

    // Gán kết quả vào các ô input
    document.getElementById("luongngay").value = luongNgay.toLocaleString() + " đ";
    document.getElementById("luongthang").value = luongThang.toLocaleString() + " đ";
    document.getElementById("xeploai").value = xepLoai;
    document.getElementById("thuong").value = thuong.toLocaleString() + " đ";
    document.getElementById("thuclinh").value = thucLinh.toLocaleString() + " đ";
}

function xoa() {
    document.querySelectorAll("input").forEach(i => i.value = "");
}
</script>

</body>
</html>
