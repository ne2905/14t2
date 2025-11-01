<!DOCTYPE html>
<html lang="vi">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Tính lương nhân viên</title>
<style>
body{
  font-family: Arial, sans-serif;
  background:#fff;
  padding:20px;
}
h2{
  text-align:center;
  margin-bottom:15px;
}
form{
  width:350px;
  margin:0 auto;
  border:2px solid #555;
  padding:15px;
}
table{
  width:100%;
  border-collapse:collapse;
}
td{
  border:1px solid #555;
  padding:6px;
}
input[type=text], input[type=number]{
  width:95%;
  padding:4px;
  border:1px solid #888;
}
button{
  padding:6px 15px;
  margin:8px 5px 0 5px;
  border:1px solid #333;
  border-radius:3px;
  cursor:pointer;
}
button:hover{
  background:#ddd;
}
.buttons{
  text-align:center;
}
</style>
</head>
<body>
<h2>TÍNH LƯƠNG NHÂN VIÊN</h2>
<form>
  <table>
    <tr>
      <td>Tên nhân viên</td>
      <td><input type="text" id="ten"></td>
    </tr>
    <tr>
      <td>Số tháng làm việc</td>
      <td><input type="number" id="thang"></td>
    </tr>
    <tr>
      <td>Hệ số lương</td>
      <td><input type="text" id="heso" readonly></td>
    </tr>
    <tr>
      <td>Lương cơ bản</td>
      <td><input type="text" id="luongcb" value="650000" readonly></td>
    </tr>
    <tr>
      <td>Lương tháng</td>
      <td><input type="text" id="luongthang" readonly></td>
    </tr>
    <tr>
      <td>Thuế thu nhập</td>
      <td><input type="text" id="thue" readonly></td>
    </tr>
    <tr>
      <td>Thực lĩnh</td>
      <td><input type="text" id="thuclinh" readonly></td>
    </tr>
  </table>
  <div class="buttons">
    <button type="button" onclick="tinhLuong()">Tính tiền</button>
    <button type="reset">Xóa</button>
  </div>
</form>

<script>
function tinhLuong(){
  let thang = parseFloat(document.getElementById('thang').value);
  let heso = 0;
  if (isNaN(thang) || thang < 0) {
    alert("Vui lòng nhập số tháng làm việc hợp lệ!");
    return;
  }

  // Xác định hệ số theo số tháng làm việc
  if (thang < 12) heso = 1.92;
  else if (thang < 36) heso = 2.34;
  else if (thang < 60) heso = 3;
  else heso = 4.5;

  document.getElementById('heso').value = heso;

  // Lương cơ bản cố định
  const luongcb = 650000;
  const luongthang = heso * luongcb;
  document.getElementById('luongthang').value = luongthang.toLocaleString();

  // Tính thuế thu nhập
  let thue = 0;
  if (luongthang > 15000000) thue = 0.3 * luongthang;
  else if (luongthang >= 7000000) thue = 0.2 * luongthang;
  else thue = 0.1 * luongthang;

  document.getElementById('thue').value = thue.toLocaleString();

  // Tính lương thực lĩnh
  const thuclinh = luongthang - thue;
  document.getElementById('thuclinh').value = thuclinh.toLocaleString();
}
</script>
</body>
</html>
