<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
    
    <%
    String id = request.getParameter("id");
    String pw = request.getParameter("pw");
    String name = request.getParameter("name");
    String com = request.getParameter("com");
    String tel = request.getParameter("tel");
    String gender = request.getParameter("gender");
    String[] hobby = request.getParameterValues("hobby");
    //값이 여러개가 클라이언트로 부터 넘어오는 경우는
    //requerst.getParameterValues()를 쓴다.
    //반환 타입은 String[](배열)로 받는다
    //for문으로 배열에 있는 것을 꺼내 주어야한다.
    
    out.print("ID는"+id+"<br>");
    out.print("PW는"+pw+"<br>");
    out.print("이름은"+name+"<br>");
    out.print("전화번호는"+com+tel+"<br>");
    out.print("성별은"+gender+"<br>");
    out.print("취미는");
    for(String s : hobby)
    	{out.print(" "+s);}
    
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