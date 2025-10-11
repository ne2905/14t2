<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bài 7: Tam giác bằng while</title>
    <style>
        pre {
            font-size: 18px;
            line-height: 1.2;
        }
    </style>
</head>
<body>
    <h2>Bài 7: Sử dụng while để in tam giác</h2>
    <pre id="tamgiacWhile"></pre>

    <script>
        let tamgiacWhile = "";
        let i = 1;
        while (i <= 4) {
            let j = 1;
            while (j <= i) {
                tamgiacWhile += "*";
                j++;
            }
            tamgiacWhile += "\n";
            i++;
        }
        document.getElementById("tamgiacWhile").textContent = tamgiacWhile;
    </script>
</body>
</html>
