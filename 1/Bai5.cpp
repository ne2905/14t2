<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <title>Bài 9: Hiển thị ngày trong tuần hiện tại</title>
</head>
<body>
    <h2>Bài 9: Sử dụng Switch Case in ra ngày trong tuần (tự động theo máy tính)</h2>
    <div id="ketqua"></div>

    <script>
        let today = new Date();
        let thu = today.getDay(); 
        let ngay;

        switch (thu) {
            case 0: ngay = "Chủ nhật"; break;
            case 1: ngay = "Thứ hai"; break;
            case 2: ngay = "Thứ ba"; break;
            case 3: ngay = "Thứ tư"; break;
            case 4: ngay = "Thứ năm"; break;
            case 5: ngay = "Thứ sáu"; break;
            case 6: ngay = "Thứ bảy"; break;
            case 7: ngay = "Chủ Nhật"; break;
            default: ngay = "Không xác định";
        }
        document.getElementById("ketqua").textContent = "Hôm nay là: " + ngay;
    </script>
</body>
</html>
