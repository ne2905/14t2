<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bài 5: In bảng cửu chương</title>
    <style>
        table {
            border-collapse: collapse;
            margin-top: 10px;
            border: 2px solid black;
        }
        td {
            border: 1px solid black;
            padding: 4px 8px;
            text-align: center;
        }
    </style>
</head>
<body>
    <h2>Bài 5: In bảng cửu chương</h2>
    <div id="bangcuuchuong"></div>

    <script>
        let div = document.getElementById("bangcuuchuong");
        let table = document.createElement("table");

        for (let i = 1; i <= 10; i++) {
            let row = document.createElement("tr");
            for (let j = 1; j <= 10; j++) {
                let cell = document.createElement("td");
                cell.textContent = `${j}x${i}=${j * i}`;
                row.appendChild(cell);
            }
            table.appendChild(row);
        }

        div.appendChild(table);
    </script>
</body>
</html>
