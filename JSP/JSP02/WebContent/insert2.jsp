<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
    
    <%
    String id=request.getParameter("id");
    String title=request.getParameter("title");
    String content=request.getParameter("content");
    String written=request.getParameter("written");
    
    out.print("아이디"+id+"<br>");
    out.print("제목"+title+"<br>");
    out.print("내용"+content+"<br>");
    out.print("글쓴이"+written+"<br>");
    %>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>

</body>
</html>