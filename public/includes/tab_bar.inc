<script type="text/javascript" src="/js/jquery.min.js"></script>
	<script type="text/javascript">
		function toggle(id) { return false }
		
	    $(window).load(function() {
	        //sfHover();
	        attachPassMask();
	    });
		
		function sfHover(){
		var sfEls = document.getElementById("navigation").getElementsByTagName("LI");
		
			for (var i=0; i<sfEls.length; i++) {
				sfEls[i].onmouseover=function() {
					this.className+=" sfhover";
				}

				sfEls[i].onmouseout=function() {
					this.className=this.className.replace(new RegExp(" sfhover\\b"), "");
				}
			}
		}
				
		function attachPassMask(){
              if(document.getElementsByTagName) {
		var show_pass_opt = document.getElementById('show_pass_opt');
                var input = document.getElementById('password_input');
                //for(var i in inputs) {
                //  var input = inputs[i];
                  if(input.type == 'password') {
                    toggle_control = document.createElement('label');
                    toggle_control.innerHTML = "<input type=\"checkbox\" "+ "onclick=\"toggle_password('"+ input.id+"',this.checked) \" />"+" Show password";
                    show_pass_opt.appendChild(toggle_control);
                  }
                //}
              }
            }

         function toggle_password(element_id, show_text) {
              if(document.getElementById) {
                var password_input = document.getElementById(element_id);
                var new_input      = document.createElement('input');
                new_input.setAttribute('autocomplete','off');
                with(new_input) {
                id        = password_input.id;
                name      = password_input.name;
                value     = password_input.value;
                size      = password_input.size;
                className = password_input.className;
                tabindex  = password_input.tabindex;
                type      = show_text ? 'text' : 'password';
              }
          password_input.parentNode.replaceChild(new_input,password_input);
        }
      }
	</script>
	
<!-- #include virtual="login_path.inc" -->
<table id="login" width="100%">
	<tr>
		<td align="left" rowspan="3" width="20%">
			<div id="homepage_login">
			<% If(Application("MAINTENANCE_MODE"))Then
			Response.Write("Online Services is undergoing routine maintanance.")
			Else
			%>

			<form id="loginForm" action="<%= LoginUrl %>/users/loginProcess.asp" method="post">
				<table>
					<tr>
						<td>&nbsp;</td>
						<td><font color="#000" size=2><strong><center>Online Services</center></strong></font>
						<%If (Request.QueryString("msg") <> "") Then%>
							<div class="login_message"><%=Request.QueryString("msg")%></div>
						<%End If%>
						</td>
						<td>&nbsp;</td>
					</tr>
					<tr>
						<td>User ID:</td>
						<td><input type="text" name="txtLogin" size="25" maxlength="50" tabindex="1" /></td>
						<td align="center"><input type="hidden" name="redir" value="<%=Request.QueryString("redir")%>" /></td>
						<td rowspan="2" valign="center"><input type="submit" name="cmdLogin" value="Log In" tabindex="3" style="font-weight:bold" /></td>
					</tr>
					<tr>
						<td>Password:</td>
						<td><input type="password" name="txtPassword" size="25" maxlength="50" tabindex="2" id="password_input" /></td>
						<td colspan="2">&nbsp;</td>
					</tr>
					<tr>
						<td>&nbsp;</td>
						<td align="center" id="show_pass_opt"></td>
						<td colspan="2">&nbsp;</td>
					</tr>
					<tr>
						<td>&nbsp;</td>
						<td align="center"><a href="<%=LoginUrl%>/users/passwordForgot.html">Forgot Your Password?</a></td>
						<td colspan="2">&nbsp;</td>
					</tr>
				</table>
			</form>
			<% End If %>
			
			<!--
			<div class="login_message">ABPMR will be performing a server update on Tuesday July 12<sup>th</sup>. 
				ABPMR online services will be unvailable beginning at 6:00 pm CDT (7:00 EDT/4:00 PDT).
			</div>
			-->			
			
			</div>
			<!--END homepage_login-->
		</td>
		<td align="right" colspan="2">
			<!--Google CSE Code -->
			<a href="/site_map.html">Site Map</a> | <a href="/index.html">Home</a> | <a href="/candidates/contact_us.html">Contact Us</a>
			<p>
			<form action="" id="searchbox_015316774592698207603:2gpr0l56mlo" onsubmit="return false;">
			<div>
				<input type="text" name="q" size="35"/>
				<input type="submit" value="Search"/>
			</div>
			</form>

			<div id="results_015316774592698207603:2gpr0l56mlo" style="display:none">
			<div class="cse-closeResults"> 
				<a>&times; Close</a>
			</div>
			<div class="cse-resultsContainer"></div>
			</div>

			<style type="text/css">
				@import url(https://www.google.com/cse/api/overlay.css);
			</style>

			<script src="https://www.google.com/uds/api?file=uds.js&v=1.0&key=ABQIAAAA08rw91C_pxBHY_yECgqBzRShchfrW1-5yjK75oTL1eeVtXFWcRTf0hkuDrAjlYdgMU3-d3aDhaDdNQ&hl=en" type="text/javascript"></script>
			<script src="https://www.google.com/cse/api/overlay.js" type="text/javascript"></script>
			<script type="text/javascript">
			function OnLoad() {
				new CSEOverlay("015316774592698207603:2gpr0l56mlo",
				document.getElementById("searchbox_015316774592698207603:2gpr0l56mlo"),
				document.getElementById("results_015316774592698207603:2gpr0l56mlo"));
			}
			GSearch.setOnLoadCallback(OnLoad);
			</script>
			</p>
		</td>	
	</tr>
	<tr>
		<td rowspan=2 valign="bottom" height="32">
		<div id="tabs" >
		<ul>
			<li><a href="/consumers/what_is_abpmr.html"><span>About ABPMR</span></a>
				<ul>
					<li><a href="/consumers/what_is_abpmr.html">What is the ABPMR?</a></li>
					<li><a href="/consumers/core_values.html">Core Values</a></li>
					<li><a href="/consumers/pmr_definition.html">Definition of Physical Medicine and Rehabilitation</a></li>
					<li><a href="/consumers/board_func.html">Functions of the Board</a></li>
					<li><a href="/consumers/board_dir.html">Board of Directors </a></li>
					<li><a href="/consumers/related_orgs.html">Related Organizations</a></li>
					<li><a href="/candidates/staff.html">Board Office Staff</a></li>
				</ul>
			</li>
			<li><a href="/candidates/req_partI.html"><span>Certification</span></a>
				<ul>
					<li><a href="/boi/Cert_BOI.pdf" target="_blank">Booklet of Information</a></li>
					<li><a href="/candidates/partI.html">Part I </a></li>
					<li><a href="/candidates/partII.html">Part II</a></li>
					<li><a href="/candidates/subspecialties.html">Subspecialties</a></li>
					<li><a href="/candidates/exam_statistics.html">Exam Statistics</a></li>
					<li><a href="/candidates/exam_calendar.html">Exam Calendar</a></li>
				</ul>
			</li>
			<li><a href="/diplomates/moc.html"><span>Maintenance of Certification</span></a>
				<ul>
					<li><a href="/boi/MOC_BOI.pdf" target="_blank">Booklet of Information</a></li>
					<li><a href="/diplomates/res_intro.html">Introduction to MOC</a></li>
					<li><a href="/diplomates/moc.html">Details</a></li>
					<li><a href="/diplomates/moc_components.html">Components</a></li>
					<li><a href="/moc/documents/MOCbrochure_web.pdf" target="_blank">MOC Brochure</a></li>
					<li><a href="/diplomates/timeline.html">MOC Timeline</a></li>
					<li><a href="/diplomates/moc_faq.html">MOC FAQ</a></li>
					<li><a href="/diplomates/cme_reporting.html">CME Reporting Process</a></li>
					<li><a href="/diplomates/cme_faq.html">CME FAQ</a></li>
					<li><a href="/diplomates/sa.html">Self-Assessment Options</a></li>
					<li><a href="/diplomates/sa_faq.html">Self-Assessment FAQ</a>
					<li><a href="/diplomates/pp.html">Practice Performance Overview</a></li>
					<li><a href="/diplomates/pp_faq.html">Practice Performance FAQ</a>
					<li><a href="/diplomates/pp_clinical.html">Clinical Care Practice Improvement Project (PIP)</a></li>
					<li><a href="/diplomates/pp_criteria.html">PIP Criteria</a></li>
					<li><a href="/diplomates/pp_samples.html">PIP Samples</a></li>	
					<li><a href="/candidates/subspecialties.html">Subspecialties</a></li>
					<li><a href="/forms/ReplacementCertificateOrderForm.pdf" target="_blank">Replacement Certificate Order Form</a></li>
					<li><a href="/downloads/ABPMR_MOCPartTwoapp.doc" target="_blank">
						Application for Approval of Self-Assessment Activities (MOC Part II)</a></li>
					<li><a href="/downloads/ABPMR_MOCPartFourapp.doc" target="_blank">
						Application for Approval of Performance in Practice Activities (MOC Part IV)</a></li>
					<li><a href="/diplomates/exam_calendar.html">Exam Calendar</a></li>
				</ul>
			</li>
			<li><a href="/candidates/communication.html"><span>Communication</span></a>
				<ul>
					<!--<li><a href="/candidates/communication.html">Announcements</a></li>-->
					<li><a href="/candidates/contact_us.html">Contact Us</a></li>
					<li><a href="/candidates/candidate_faq.html">Candidate FAQ</a></li>
					<li><a href="/diplomates/moc_faq.html">MOC FAQ</a></li>
					<li><a href="/diplomates/cme_faq.html">CME FAQ</a></li>
					<li><a href="/candidates/newsletters.html">Newsletters</a></li>
					<li><a href="/consumers/whos_certified.html">Who's Certified</a> </li>
				</ul>
			</li>
			<li><a href="/candidates/policies.html"><span>Resources</span></a>
				<ul>			
					<li><a href="/boi/Cert_BOI.pdf" target="_blank">Certification - Booklet of Information</a></li>
					<li><a href="/boi/MOC_BOI.pdf" target="_blank">MOC - Booklet of Information</a></li>
					<li><a href="/candidates/login.html">Exam Applications</a></li>
					<li><a href="/candidates/exam_statistics.html">Exam Statistics</a></li>
					<li><a href="/forms/ReplacementCertificateOrderForm.pdf" target="_blank">Replacement Certificate Order Form</a></li>
					<li><a href="/tutorials/MOC_Web_Tutorial.pdf" target="_blank">'My MOC Status' Tutorial</a></li>
					<li><a href="/candidates/policies.html">Forms and Policies</a></li>
					<!--
					<li><a href="/documents/WhatDoesItMean_web.pdf" target="_blank">Board Certified Brochure</a></li>
					-->
					<li><a href="/documents/WhatDoes_OrderForm.pdf" target="_blank">Brochure Order Form</a></li>
					<li><a href="/downloads/ABPMR_MOCPartTwoapp.doc" target="_blank">
						Application for Approval of Self-Assessment Activities (MOC Part II)</a></li>
					<li><a href="/downloads/ABPMR_MOCPartFourapp.doc" target="_blank">
						Application for Approval of Performance in Practice Activities (MOC Part IV)</a></li>
					<li><a href="/downloads/ROCA_Description_and_Instructions.pdf" target="_blank">Resident Observation and Competency 
						Assessment (RO&CA) - Description &amp; Instructions</a></li>
					<li><a href="/downloads/roca.pdf" target="_blank">Resident Observation and Competency Assessment (RO&CA) - Form</a></li>
					<li><a href="/downloads/360_Resident_Eval.doc">360 Resident Evaluation Form</a></li>
					<li><a href="http://journals.lww.com/ajpmr/pages/articleviewer.aspx?year=2007&issue=10000&article=00011&type=abstract" target="_blank">
						Reliability of a 360-Degree Evaluation to Assess Resident Competence (Article)</a></li>			
				</ul>
			</li>
		</ul>
	</div><!-- END tabs -->
	</td>
</tr>
</table>
