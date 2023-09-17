<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
    <head>
        <title>Games</title>
        <style>
            td {
                border: 1px solid rgb(140, 124, 103);
                padding: 5px;
            }
            th {
                border: 1px solid rgb(70, 129, 136);
                padding: 5px;
            }
        </style>
    </head>
    <body>
        <table style="border-collapse: collapse; margin:10px;">
            <tr style ="background: rgb(161, 219, 202); font-size: 20px;">
                <th>Игра</th>
                <th>Название</th>
                <th>Год выхода</th>
                <th>Краткий сюжет</th>
            </tr>
            <xsl:for-each select="games/game">
            <xsl:sort select="author"/>
            <tr style="background-color: rgb(226, 208, 184); font-size: 17px;">
                <td><xsl:value-of select="author"/></td>
                <td><xsl:value-of select="title"/></td>
                <td><xsl:value-of select="year"/></td>
                <td><xsl:value-of select="story"/></td>
            </tr>
            </xsl:for-each>
        </table>
    </body>
</html>
</xsl:template>
</xsl:stylesheet>