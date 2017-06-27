#include <ociextp.h>
#include <errno.h>

void extprocsh(OCIExtProcContext *ctx, char *cmd, short cmdInd)
{
   int excNum = 20001;
   char excMsg[512];
   size_t excMsgLen;

   if (cmdInd == OCI_IND_NULL)
      return;

   if (system(cmd) != 0)
   {
      sprintf(excMsg, "Error %i during system call: %.*s", errno, 475,
            strerror(errno));
      excMsgLen = (size_t)strlen(excMsg);

      if (OCIExtProcRaiseExcpWithMsg(ctx, excNum, (text *)excMsg, excMsgLen)
             != OCIEXTPROC_SUCCESS)
         return;
   }

}




/*======================================================================
| Supplement to the fifth edition of Oracle PL/SQL Programming by Steven
| Feuerstein with Bill Pribyl, Copyright (c) 1997-2009 O'Reilly Media, Inc. 
| To submit corrections or find more code samples visit
| http://oreilly.com/catalog/9780596514464/
*/
