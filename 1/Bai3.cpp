<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="html" encoding="UTF-8"/>
    
    <xsl:template match="/">
        <html>
            <head>
                <title>Bảng Giá Xe</title>
                <style>
                    body { font-family: Arial, sans-serif; text-align: center; margin: 20px; }
                    h2 { text-align: center; }
                    .hang-container { margin-bottom: 30px; text-align: left; display: inline-block; width: 80%; }
                    table { border-collapse: collapse; width: 100%; margin-top: 5px; }
                    th, td { border: 1px solid #000; padding: 8px; text-align: left; }
                    th { background-color: #92d050; text-align: center; }
                    td:nth-child(1), th:nth-child(1) { text-align: center; width: 50px; }
                    td:nth-child(5), th:nth-child(5) { text-align: right; }
                    .logo { text-align: center; margin-bottom: 5px; }
                    .logo img { width: 80px; height: auto; }
                </style>
            </head>
            <body>
                <h2>BẢNG GIÁ XE</h2>
                
                <xsl:for-each select="banggiaxe/hangxe">
                    <div style="text-align: center;">
                        <div class="hang-container">
                            <div class="logo">
                                <xsl:choose>
                                    <xsl:when test="@ten='Toyota'">
                                        <img src="T.png" alt="Toyota"/>
                                    </xsl:when>
                                    <xsl:when test="@ten='Honda'">
                                        <img src="H.png" alt="Honda"/>
                                    </xsl:when>
                                    <xsl:when test="@ten='BMW'">
                                        <img src="B.png" alt="BMW"/>
                                    </xsl:when>
                                </xsl:choose>
                            </div>
                            <div><strong>Hãng xe: <xsl:value-of select="@ten"/></strong></div>
                            <table>
                                <tr>
                                    <th>STT</th>
                                    <th>Dòng xe</th>
                                    <th>Phiên bản</th>
                                    <th>Động cơ</th>
                                    <th>Giá (triệu)</th>
                                </tr>
                                <xsl:for-each select="dongxe">
                                    <tr>
                                        <td><xsl:value-of select="position()"/></td>
                                        <td><xsl:value-of select="@ten"/></td>
                                        <td><xsl:value-of select="phienban"/></td>
                                        <td><xsl:value-of select="dongco"/></td>
                                        <td><xsl:value-of select="gia"/></td>
                                    </tr>
                                </xsl:for-each>
                            </table>
                        </div>
                    </div>
                </xsl:for-each>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>
