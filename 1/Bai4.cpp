<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bài Tập JavaScript Cơ Bản</title>
</head>
<body>
    <h1>Bài 4: In danh sách tên sách và tác giả</h1>
    <table border="1">
        <tr>
            <th>STT</th>
            <th>Tên sách</th>
            <th>Tác giả</th>
        </tr>
        <tbody id="bookList"></tbody>
    </table>

    <script>
        let bookListDiv = document.getElementById("bookList");

        for (let i = 1; i <= 10; i++) {
            let row = document.createElement("tr");

            let sttCell = document.createElement("td");
            sttCell.textContent = i;
            row.appendChild(sttCell);

            let bookNameCell = document.createElement("td");
            bookNameCell.textContent = "Ten sach" + i;
            row.appendChild(bookNameCell);

            let authorCell = document.createElement("td");
            authorCell.textContent = "Ten tac gia" + i;
            row.appendChild(authorCell);

            bookListDiv.appendChild(row);
        }
    </script>
</body>
</html>
