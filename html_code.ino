

void htmlCode(){
  webPage += "<h1 align =\"center\">PSS Web Server</h1><p align=center>HR: <a href=\"socket2HRR\"><button>GET</button></a>&nbsp;<a href=\"reading\"><button>Last 5 reading</button></a></p>";
  webPage +="<body style=\"background-color:SEAL;background-position:20px 20px;background-repeat: no-repeat;\"></body>";
  webPage += "<p align=center>Movement <a href=\"socket3On\"> Did not move</p>";
  
  webPage2 += "<h1 align =\"center\">PSS Web Server</h1><p align=center>HR: <a href=\"socket2HRR\"><button>GET</button></a>&nbsp;<a href=\"reading\"><button>Last 5 reading</button></a></p>";
  webPage2 +="<body style=\"background-color:SEAL;background-position:20px 20px;background-repeat: no-repeat;\"></body>";
  webPage2 += "<p align=center>Movement <a href=\"socket3On\"> Moved</p>";

  block1 +="<h1 align =\"center\"> Patient Surveillance System</h1>";
  block1 +="<div style=\"background-color:CORAL;color:white;margin: 20px 0 20px 0;padding:20px;\">";
  block1 +="<h2 align=center>Bed 21</h2>";
  block1 +="<p align=center>Name of patient: Yash Soni</p>";
  block1 +="<p align=center>In For:High Blood pressure</p>";
  block1 +="<p align=center><a href=\"socket1\"><button>Check Report</button></a>&nbsp;</p>";
  block1 +="</div>";

  block1 +="<div style=\"background-color:firebrick;color:white;margin: 20px 0 20px 0;padding:20px;\">";
  block1 +="<h2 align=center>Bed 22</h2>";
  block1 +="<p align=center>Name of patient: Juzer Tarwala</p>";
  block1 +="<p align=center>In For:Diabeties</p>";
  block1 +="<p align=center><a href=\"socket2On\"><button>Check Report</button></a>&nbsp;</p>";
  block1 +="</div>";

 
  block1 +="<div style=\"background-color:STEELBLUE;color:white;margin: 20px 0 20px 0;padding:20px;\">";
  block1 +="<h2 align=center>Bed 23</h2>";
  block1 +="<p align=center>Name of patient: Mayur Tarwala</p>";
  block1+="<p align=center>In For:Dehydration</p>";
  block1+="<p align=center><a href=\"socket2On\"><button>Check Report</button></a>&nbsp;</p>";
  block1+="</div>";
 
   Refresh = "<meta http-equiv=\"refresh\" content=\"3\">";
}

