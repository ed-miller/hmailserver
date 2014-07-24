// Copyright (c) 2005 Martin Knafve / hMailServer.com.  
// http://www.hmailserver.com

#include "StdAfx.h"

#include "DeliveryTask.h"
#include "SMTPDeliverer.h"



#ifdef _DEBUG
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW
#endif

namespace HM
{
   DeliveryTask::DeliveryTask(shared_ptr<Message> pMessage) :
      Task("DeliveryTask"),
      m_pMessage(pMessage)
   {
      
   }

   DeliveryTask::~DeliveryTask(void)
   {
   }

   void 
   DeliveryTask::DoWork()
   {
      // Do our delivery work.
      SMTPDeliverer::DeliverMessage(m_pMessage);
   }

}