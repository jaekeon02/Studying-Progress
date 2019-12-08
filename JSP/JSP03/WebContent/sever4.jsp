<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<%
    String writer=request.getParameter("writer");
	String reply=request.getParameter("reply");

	out.print("-"+writer+'-'+reply+"<br>");
%>