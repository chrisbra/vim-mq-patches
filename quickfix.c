# HG changeset patch
# Parent 297f413278713bb2c916c2a6a1f5ad6da43d4c52
new item %F in errorformat

diff --git a/src/quickfix.c b/src/quickfix.c
--- a/src/quickfix.c
+++ b/src/quickfix.c
@@ -76,7 +76,7 @@
 
 static qf_info_T ql_info;	/* global quickfix list */
 
-#define FMT_PATTERNS 10		/* maximum number of % recognized */
+#define FMT_PATTERNS 11		/* maximum number of % recognized */
 
 /*
  * Structure used to hold the info of one part of 'errorformat'
@@ -247,7 +247,8 @@
 			{'r', ".*"},
 			{'p', "[- .]*"},
 			{'v', "\\d\\+"},
-			{'s', ".\\+"}
+			{'s', ".\\+"},
+			{'F', "\\S\\+"}
 		    };
 #ifdef FEAT_MBYTE
     int check_bomb = TRUE;
@@ -342,7 +343,7 @@
 			goto error2;
 		    }
 		    if ((idx
-				&& idx < 6
+				&& ( idx < 6 || idx == 10)
 				&& vim_strchr((char_u *)"DXOPQ",
 						     fmt_ptr->prefix) != NULL)
 			    || (idx == 6
@@ -632,7 +633,8 @@
 		 * We check for an actual submatch, because "\[" and "\]" in
 		 * the 'errorformat' may cause the wrong submatch to be used.
 		 */
-		if ((i = (int)fmt_ptr->addr[0]) > 0)		/* %f */
+		if ((i = (int)fmt_ptr->addr[0]) > 0		/* %f */
+		    || (i = (int)fmt_ptr->addr[10]) > 0)	/* %F */
 		{
 		    int c;
 
