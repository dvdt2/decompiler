// Decompiled by Ghidra: classes.dex

// === A @ 5000724c ===

/* Class: LA;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Landroid/os/Binder;
   Interfaces: 
    Landroid/os/IInterface;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Lorg/chromium/webapk/shell_apk/WebApkServiceFactory;
    Landroid/os/IBinder;
    I
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 5
   Method Incoming Size: 4
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6898
   Method ID Offset: 0x1bcc
    */

void A::A(A *this,WebApkServiceFactory *p1,IBinder *p2,int p3)

{
  (*this-><init>)(this);
  (*this->attachInterface)(this,this,(String *)"org.chromium.webapk.lib.runtime_library.IWebApkApi")
  ;
  *this->c = p1;
  *this->b = p2;
  *this->a = p3;
  return;
}



// === a @ 5000727c ===

/* Class: LA;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Landroid/os/Binder;
   Interfaces: 
    Landroid/os/IInterface;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: I( Ljava/lang/String;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 4
   Method Incoming Size: 2
   Method Outgoing Size: 2
   Method Debug Info Offset: 0x68a5
   Method ID Offset: 0x1bd4
    */

int A::a(A *this,String *p1)

{
  Class *pCVar1;
  Field *ref;
  Object *ref_00;
  int iVar2;
  IBinder *local_0;
  
  local_0 = *this->b;
  if (local_0 == (IBinder *)0x0) {
    return -1;
  }
  pCVar1 = (*local_0->getClass)(local_0);
  pCVar1 = (*pCVar1->getSuperclass)(pCVar1);
  ref = (*pCVar1->getDeclaredField)(pCVar1,p1);
  (*ref->setAccessible)(ref,true);
  ref_00 = (*ref->get)(ref,(Object *)0x0);
  checkCast(ref_00,Integer);
  iVar2 = (*ref_00->intValue)(ref_00);
  return iVar2;
}



// === asBinder @ 500072ec ===

/* Class: LA;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Landroid/os/Binder;
   Interfaces: 
    Landroid/os/IInterface;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/os/IBinder;(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 0
   Method Debug Info Offset: 0x68bf
   Method ID Offset: 0x1bdc
    */

IBinder * A::asBinder(A *this)

{
  return this;
}



// === b @ 50007300 ===

/* Class: LA;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Landroid/os/Binder;
   Interfaces: 
    Landroid/os/IInterface;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Z( I
    Landroid/os/Parcel;
    Landroid/os/Parcel;
    I
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 12
   Method Incoming Size: 5
   Method Outgoing Size: 5
   Method Debug Info Offset: 0x68c3
   Method ID Offset: 0x1be4
    */

boolean A::b(A *this,int p1,Parcel *p2,Parcel *p3,int p4)

{
  undefined1 uVar1;
  boolean bVar2;
  String *pSVar3;
  
  pSVar3 = (String *)"org.chromium.webapk.lib.runtime_library.IWebApkApi";
  if ((0 < p1) && (p1 < 0x1000000)) {
    (*p2->enforceInterface)(p2,pSVar3);
  }
  if (p1 != 0x5f4e5446) {
                    /* WARNING: Could not recover jumptable at 0x50007338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if ((packed_switch_payload_8_500075b4.first_key <= (uint)p1) &&
       ((uint)p1 <
        packed_switch_payload_8_500075b4.first_key +
        ((uint)packed_switch_payload_8_500075b4._0_4_ >> 0x10))) {
      uVar1 = (*(code *)(*(int *)((p1 - packed_switch_payload_8_500075b4.first_key) * 4 + 0x500075bc
                                 ) * 2 + 0x50007338))();
      return (boolean)uVar1;
    }
    bVar2 = (*super->onTransact)(this,p1,p2,p3,p4);
    return bVar2;
  }
  (*p3->writeString)(p3,pSVar3);
  return true;
}



// === onTransact @ 500075fc ===

/* Class: LA;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Landroid/os/Binder;
   Interfaces: 
    Landroid/os/IInterface;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Z( I
    Landroid/os/Parcel;
    Landroid/os/Parcel;
    I
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 10
   Method Incoming Size: 5
   Method Outgoing Size: 5
   Method Debug Info Offset: 0x6911
   Method ID Offset: 0x1bec
    */

boolean A::onTransact(A *this,int p1,Parcel *p2,Parcel *p3,int p4)

{
  boolean bVar1;
  undefined1 uVar2;
  int iVar3;
  Class *ref;
  Method *ref_00;
  Integer *pIVar4;
  Object **ppOVar5;
  String *pSVar6;
  Parcel *pPVar7;
  int iVar8;
  Object *pOVar9;
  Class *pCVar10;
  RemoteException *ref_01;
  StringBuilder *ref_02;
  
  iVar3 = (*Binder_getCallingUid)();
  iVar8 = *this->a;
  if (iVar8 != iVar3) {
    ref_01 = (RemoteException *)new(RemoteException);
    ref_02 = new StringBuilder((String *)"Unauthorized caller ");
    (*ref_02->append)(ref_02,iVar3);
    (*ref_02->append)(ref_02,(String *)" does not match expected host=");
    (*ref_02->append)(ref_02,iVar8);
    pSVar6 = (*ref_02->toString)(ref_02);
    uVar2 = (*ref_01-><init>)(ref_01,pSVar6);
    throwException(ref_01);
    return (boolean)uVar2;
  }
  iVar3 = (*this->a)(this,(String *)"TRANSACTION_notifyNotification");
  if (((p1 != iVar3) &&
      (iVar3 = (*this->a)(this,(String *)"TRANSACTION_checkNotificationPermission"), p1 != iVar3))
     && (iVar3 = (*this->a)(this,(String *)"TRANSACTION_requestNotificationPermission"), p1 != iVar3
        )) {
    pPVar7 = Parcel;
    pOVar9 = *this->b;
    if (pOVar9 != (Object *)0x0) {
      ref = (*pOVar9->getClass)(pOVar9);
      pCVar10 = *Integer_TYPE;
      filledNewArray([Ljava/lang/Class;,pCVar10,pPVar7,pPVar7,pCVar10);
      ref_00 = (*ref->getMethod)(ref,(String *)"onTransact",(Class **)ref);
      (*ref_00->setAccessible)(ref_00,true);
      pIVar4 = (*Integer_valueOf)(p1);
      ppOVar5 = (Object **)(*Integer_valueOf)(p4);
      filledNewArray([Ljava/lang/Object;,pIVar4,p2,p3,ppOVar5);
      pOVar9 = (*ref_00->invoke)(ref_00,pOVar9,ppOVar5);
      checkCast(pOVar9,Boolean);
      bVar1 = (*pOVar9->booleanValue)(pOVar9);
      return bVar1;
    }
    return false;
  }
  bVar1 = (*this->b)(this,p1,p2,p3,p4);
  return bVar1;
}



// === a @ 50007710 ===

/* Class: LB;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/content/SharedPreferences;( Landroid/content/Context;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 3
   Method Incoming Size: 1
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6927
   Method ID Offset: 0x1bf4
    */

SharedPreferences * B::a(Context *p0)

{
  SharedPreferences *pSVar1;
  
  pSVar1 = (*p0->getSharedPreferences)(p0,(String *)"org.chromium.webapk.shell_apk",0);
  return pSVar1;
}



// === a @ 50007730 ===

/* Class: LC;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
    ACC_SYNTHETIC
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/content/ComponentName;( Landroid/app/ActivityManager$RecentTaskInfo;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
    ACC_VOLATILE
    ACC_BRIDGE
    ACC_SYNTHETIC
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 0
   Method Debug Info Offset: 0x6930
   Method ID Offset: 0x1bfc
    */

ComponentName * C::a(ActivityManager_RecentTaskInfo *p0)

{
  return *p0->topActivity;
}



// === a @ 50007748 ===

/* Class: LD;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/content/Context;
    Le;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 8
   Method Incoming Size: 2
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x6936
   Method ID Offset: 0x1c04
    */

void D::a(Context *p0,e *p1)

{
  ArrayList *ref;
  Parcelable *pPVar1;
  int iVar2;
  Object *pOVar3;
  Intent *ref_00;
  String *pSVar4;
  int iVar5;
  
  if (*p1->j != (String *)0x0) {
    ref_00 = *p1->d;
    pSVar4 = (String *)"android.intent.extra.STREAM";
    ref = (*ref_00->getParcelableArrayListExtra)(ref_00,pSVar4);
    if (ref == (ArrayList *)0x0) {
      ref = new ArrayList();
      pPVar1 = (*ref_00->getParcelableExtra)(ref_00,pSVar4);
      checkCast(pPVar1,Uri);
      if (pPVar1 != (Parcelable *)0x0) {
        (*ref->add)(ref,pPVar1);
      }
    }
    iVar2 = (*ref->size)(ref);
    iVar5 = 0;
    while (iVar5 < iVar2) {
      pOVar3 = (*ref->get)(ref,iVar5);
      iVar5 = iVar5 + 1;
      checkCast(pOVar3,Uri);
      (*p0->grantUriPermission)(p0,*(*p1->b)->a,pOVar3,1);
    }
  }
  return;
}



// === b @ 500077c8 ===

/* Class: LD;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Z( Landroid/content/Context;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 2
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6958
   Method ID Offset: 0x1c0c
    */

boolean D::b(Context *p0)

{
  Resources *ref;
  Configuration *pCVar1;
  
  ref = (*p0->getResources)(p0);
  pCVar1 = (*ref->getConfiguration)(ref);
  if ((*pCVar1->uiMode & 0x30U) == 0x20) {
    return true;
  }
  return false;
}



// === c @ 50007800 ===

/* Class: LD;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Z( Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 3
   Method Incoming Size: 1
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6968
   Method ID Offset: 0x1c14
    */

boolean D::c(SplashActivity *p0)

{
  boolean bVar1;
  Context *ref;
  PackageManager *ref_00;
  
  ref = (*p0->getApplicationContext)(p0);
  ref_00 = (*ref->getPackageManager)(ref);
  bVar1 = (*ref_00->hasSystemFeature)(ref_00,(String *)"android.hardware.type.automotive");
  return bVar1;
}



// === d @ 50007854 ===

/* Class: LD;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/os/Bundle;( Landroid/content/Context;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 3
   Method Incoming Size: 1
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x697a
   Method ID Offset: 0x1c1c
    */

Bundle * D::d(Context *p0)

{
  PackageManager *ref;
  String *pSVar1;
  ApplicationInfo *pAVar2;
  
  ref = (*p0->getPackageManager)(p0);
  pSVar1 = (*p0->getPackageName)(p0);
  pAVar2 = (*ref->getApplicationInfo)(ref,pSVar1,0x80);
  return *pAVar2->metaData;
}



// === e @ 50007898 ===

/* Class: LD;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Z( I
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 12
   Method Incoming Size: 1
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x6989
   Method ID Offset: 0x1c24
    */

boolean D::e(int p0)

{
  int iVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = (*Color_red)(p0);
  fVar3 = (float)iVar1 / 255.0;
  iVar1 = (*Color_green)(p0);
  fVar4 = (float)iVar1 / 255.0;
  iVar1 = (*Color_blue)(p0);
  fVar5 = (float)iVar1 / 255.0;
  if (0.03928 <= fVar3) {
    dVar2 = (*Math_pow)((double)((fVar3 + 0.055) / 1.055),2.4000000953674316);
    fVar3 = (float)dVar2;
  }
  else {
    fVar3 = fVar3 / 12.92;
  }
  if (0.03928 <= fVar4) {
    dVar2 = (*Math_pow)((double)((fVar4 + 0.055) / 1.055),2.4000000953674316);
    fVar4 = (float)dVar2;
  }
  else {
    fVar4 = fVar4 / 12.92;
  }
  if (0.03928 <= fVar5) {
    dVar2 = (*Math_pow)((double)((fVar5 + 0.055) / 1.055),2.4000000953674316);
    fVar5 = (float)dVar2;
  }
  else {
    fVar5 = fVar5 / 12.92;
  }
  fVar3 = (*Math_abs)(1.05 / (fVar5 * 0.0722 + fVar4 * 0.7152 + fVar3 * 0.2126 + 0.05));
  if (3.0 <= fVar3) {
    return true;
  }
  return false;
}



// === a @ 50007990 ===

/* Class: La;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Ljava/io/File;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 5
   Method Incoming Size: 1
   Method Outgoing Size: 2
   Method Debug Info Offset: 0x69d2
   Method ID Offset: 0x1c2c
    */

void a::a(File *p0)

{
  boolean bVar1;
  File **ppFVar2;
  String *pSVar3;
  StringBuilder *ref;
  int iVar4;
  
  if (p0 != (File *)0x0) {
    bVar1 = (*p0->isDirectory)(p0);
    if ((bVar1) && (ppFVar2 = (*p0->listFiles)(p0), ppFVar2 != (File **)0x0)) {
      for (iVar4 = 0; iVar4 < ppFVar2->length; iVar4 = iVar4 + 1) {
        (*a_a)(ppFVar2[iVar4]);
      }
    }
    bVar1 = (*p0->delete)(p0);
    if (!bVar1) {
      pSVar3 = (*p0->getAbsolutePath)(p0);
      ref = new StringBuilder((String *)"Failed to delete : ");
      (*ref->append)(ref,pSVar3);
      pSVar3 = (*ref->toString)(ref);
      (*Log_e)((String *)"cr.DexLoader",pSVar3);
    }
  }
  return;
}



// === a @ 50007a14 ===

/* Class: Lb;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/content/Context;
    Landroid/content/Intent;
    Ljava/lang/String;
    J
    Landroid/content/ComponentName;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 9
   Method Incoming Size: 6
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x69f3
   Method ID Offset: 0x2414
    */

void b::a(Context *p0,Intent *p1,String *p2,long p3,ComponentName *p4)

{
  Uri *pUVar1;
  Bundle *pBVar2;
  Intent *local_0;
  
  pUVar1 = (*p1->getData)(p1);
  local_0 = new Intent((String *)"android.intent.action.VIEW",pUVar1);
  (*local_0->setComponent)(local_0,p4);
  (*local_0->setFlags)(local_0,0x10000000);
  pBVar2 = (*p1->getExtras)(p1);
  if (pBVar2 != (Bundle *)0x0) {
    (*local_0->putExtras)(local_0,pBVar2);
  }
  if (p2 != (String *)0x0) {
    (*local_0->putExtra)
              (local_0,(String *)"org.chromium.webapk.selected_share_target_activity_class_name",p2)
    ;
  }
  if (p3 != -1) {
    (*local_0->putExtra)(local_0,(String *)"org.chromium.chrome.browser.webapk_launch_time",p3);
  }
  (*p0->startActivity)(p0,local_0);
  return;
}



// === a @ 50007a88 ===

/* Class: Lc;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: I( Landroid/content/Context;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 3
   Method Incoming Size: 1
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6a03
   Method ID Offset: 0x241c
    */

int c::a(Context *p0)

{
  PackageManager *ref;
  String *pSVar1;
  PackageInfo *pPVar2;
  
  ref = (*p0->getPackageManager)(p0);
  pSVar1 = (*p0->getPackageName)(p0);
  pPVar2 = (*ref->getPackageInfo)(ref,pSVar1,0);
  return *pPVar2->versionCode;
}



// === DownloadListener @ 50007ad8 ===

/* Class: Lcom/adescargar/net/DownloadListener;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Landroid/webkit/DownloadListener;
   
   Method Signature: V( Landroid/content/Context;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 2
   Method Incoming Size: 2
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x0
   Method ID Offset: 0x2424
    */

void com::adescargar::net::DownloadListener::DownloadListener(DownloadListener *this,Context *p1)

{
  (*this-><init>)(this);
  *this->mContext = p1;
  return;
}



// === onDownloadStart @ 50007af4 ===

/* Class: Lcom/adescargar/net/DownloadListener;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Landroid/webkit/DownloadListener;
   
   Method Signature: V( Ljava/lang/String;
    Ljava/lang/String;
    Ljava/lang/String;
    Ljava/lang/String;
    J
     )
   Method Access Flags:
    ACC_PUBLIC
   
   Method Register Size: 10
   Method Incoming Size: 7
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x0
   Method ID Offset: 0x242c
    */

void com::adescargar::net::DownloadListener::onDownloadStart
               (DownloadListener *this,String *p1,String *p2,String *p3,String *p4,long p5)

{
  Uri *pUVar1;
  Object *ref;
  DownloadManager_Request *local_0;
  Context *ref_00;
  
  pUVar1 = (*Uri_parse)(p1);
  local_0 = new DownloadManager$Request(pUVar1);
  (*local_0->setNotificationVisibility)(local_0,2);
  (*local_0->setAllowedOverMetered)(local_0,true);
  (*local_0->setAllowedOverRoaming)(local_0,true);
  (*local_0->setDestinationInExternalPublicDir)(local_0,(String *)"Download",(String *)"");
  ref_00 = *this->mContext;
  ref = (*ref_00->getSystemService)(ref_00,(String *)"download");
  checkCast(ref,DownloadManager);
  (*ref->enqueue)(ref,local_0);
  return;
}



// === SchemeWebViewClient @ 50007b58 ===

/* Class: Lcom/adescargar/net/SchemeWebViewClient;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/webkit/WebViewClient;
   
   Method Signature: V( Landroid/content/Context;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 2
   Method Incoming Size: 2
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x0
   Method ID Offset: 0x2434
    */

void com::adescargar::net::SchemeWebViewClient::SchemeWebViewClient
               (SchemeWebViewClient *this,Context *p1)

{
  (*this-><init>)(this);
  *this->mContext = p1;
  return;
}



// === shouldOverrideUrlLoading @ 50007b74 ===

/* Class: Lcom/adescargar/net/SchemeWebViewClient;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/webkit/WebViewClient;
   
   Method Signature: Z( Landroid/webkit/WebView;
    Ljava/lang/String;
     )
   Method Access Flags:
    ACC_PUBLIC
   
   Method Register Size: 6
   Method Incoming Size: 3
   Method Outgoing Size: 2
   Method Debug Info Offset: 0x0
   Method ID Offset: 0x243c
    */

boolean com::adescargar::net::SchemeWebViewClient::shouldOverrideUrlLoading
                  (SchemeWebViewClient *this,WebView *p1,String *p2)

{
  boolean bVar1;
  Uri *pUVar2;
  Intent *ref;
  Context *ref_00;
  
  bVar1 = (*p2->startsWith)(p2,(String *)"http");
  if ((bVar1) && (bVar1 = (*p2->contains)(p2,(CharSequence *)".apk"), !bVar1)) {
    return false;
  }
  ref = new Intent((String *)"android.intent.action.VIEW");
  pUVar2 = (*Uri_parse)(p2);
  (*ref->setData)(ref,pUVar2);
  ref_00 = *this->mContext;
  (*ref_00->startActivity)(ref_00,ref);
  return true;
}



// === WebViewActivity @ 50007bd4 ===

/* Class: Lcom/adescargar/net/WebViewActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x0
   Method ID Offset: 0x2444
    */

void com::adescargar::net::WebViewActivity::WebViewActivity(WebViewActivity *this)

{
  (*this-><init>)(this);
  return;
}



// === onBackPressed @ 50007bec ===

/* Class: Lcom/adescargar/net/WebViewActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
   
   Method Register Size: 3
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x0
   Method ID Offset: 0x244c
    */

void com::adescargar::net::WebViewActivity::onBackPressed(WebViewActivity *this)

{
  boolean bVar1;
  WebView *local_0;
  
  local_0 = *this->mWebView;
  if ((local_0 != (WebView *)0x0) && (bVar1 = (*local_0->canGoBack)(local_0), bVar1)) {
    (*local_0->goBack)(local_0);
    return;
  }
  (*super->onBackPressed)(this);
  return;
}



// === onCreate @ 50007c20 ===

/* Class: Lcom/adescargar/net/WebViewActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   
   Method Signature: V( Landroid/os/Bundle;
     )
   Method Access Flags:
    ACC_PROTECTED
   
   Method Register Size: 7
   Method Incoming Size: 2
   Method Outgoing Size: 2
   Method Debug Info Offset: 0x0
   Method ID Offset: 0x2454
    */

void com::adescargar::net::WebViewActivity::onCreate(WebViewActivity *this,Bundle *p1)

{
  WebSettings *ref;
  View *ref_00;
  WebViewClient *ref_01;
  WebChromeClient *ref_02;
  DownloadListener *ref_03;
  
  (*super->onCreate)(this,p1);
  ref_00 = new View(this);
  *this->mWebView = ref_00;
  ref = (*ref_00->getSettings)(ref_00);
  (*ref->setJavaScriptEnabled)(ref,true);
  (*ref->setDomStorageEnabled)(ref,true);
  (*ref->setUseWideViewPort)(ref,true);
  (*ref->setLoadWithOverviewMode)(ref,true);
  (*ref->setUserAgentString)
            (ref,(String *)
                 "Mozilla/5.0 (Linux; Android 10) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Mobile Safari/537.36"
            );
  ref_01 = new WebViewClient(this);
  (*ref_00->setWebViewClient)(ref_00,ref_01);
  ref_02 = new WebChromeClient();
  (*ref_00->setWebChromeClient)(ref_00,ref_02);
  ref_03 = new DownloadListener(this);
  (*ref_00->setDownloadListener)(ref_00,ref_03);
  (*this->setContentView)(this,ref_00);
  (*ref_00->loadUrl)(ref_00,(String *)"https://adescargar.net/");
  return;
}



// === a @ 50007cb4 ===

/* Class: Ld;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/app/Activity;
    Le;
    Landroid/os/Bundle;
    I
    Z
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 13
   Method Incoming Size: 5
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x6a15
   Method ID Offset: 0x245c
    */

void d::a(Activity *p0,e *p1,Bundle *p2,int p3,boolean p4)

{
  long lVar1;
  boolean bVar2;
  Context *pCVar3;
  Object *ref;
  List *pLVar4;
  Icon *pIVar5;
  ShortcutInfo *pSVar6;
  PackageManager *ref_00;
  ApplicationInfo *pAVar7;
  Uri *pUVar8;
  Bundle *pBVar9;
  byte bVar10;
  Intent *pIVar11;
  CharSequence *pCVar12;
  String *pSVar13;
  Intent *pIVar14;
  ShortcutInfo_Builder *pSVar15;
  ComponentName *pCVar16;
  String *pSVar17;
  f *pfVar18;
  Object *pOVar19;
  CharSequence *pCVar20;
  String *pSVar21;
  
  pCVar3 = (*p0->getApplicationContext)(p0);
  ref = (*pCVar3->getSystemService)(pCVar3,ShortcutManager);
  checkCast(ref,ShortcutManager);
  bVar2 = (*ManageDataLauncherActivity_b)(pCVar3,*(*p1->b)->a);
  pSVar17 = *p1->e;
  pfVar18 = *p1->b;
  pOVar19 = (Object *)"android.support.customtabs.action.SITE_SETTINGS_SHORTCUT";
  if (bVar2) {
    pSVar13 = *pfVar18->a;
    pIVar11 = new Intent(pCVar3,ManageDataLauncherActivity);
    (*pIVar11->setAction)
              (pIVar11,(String *)
                       "android.support.customtabs.action.ACTION_MANAGE_TRUSTED_WEB_ACTIVITY_DATA");
    (*pIVar11->putExtra)(pIVar11,(String *)"SITE_SETTINGS_URL",pSVar17);
    (*pIVar11->putExtra)(pIVar11,(String *)"PROVIDER_PACKAGE",pSVar13);
    pSVar15 = new ShortcutInfo$Builder(pCVar3,pOVar19);
    pSVar13 = (*pCVar3->getString)(pCVar3,0x7f080013);
    pSVar15 = (*pSVar15->setShortLabel)(pSVar15,pSVar13);
    pSVar13 = (*pCVar3->getString)(pCVar3,0x7f080012);
    pSVar15 = (*pSVar15->setLongLabel)(pSVar15,pSVar13);
    pIVar5 = (*Icon_createWithResource)(pCVar3,0x7f050000);
    pSVar15 = (*pSVar15->setIcon)(pSVar15,pIVar5);
    pSVar15 = (*pSVar15->setIntent)(pSVar15,pIVar11);
    pSVar6 = (*pSVar15->build)(pSVar15);
    pLVar4 = (*Collections_singletonList)(pSVar6);
    (*ref->addDynamicShortcuts)(ref,pLVar4);
  }
  else {
    pLVar4 = (*Collections_singletonList)(pOVar19);
    (*ref->removeDynamicShortcuts)(ref,pLVar4);
  }
  pCVar3 = (*p0->getApplicationContext)(p0);
  pCVar12 = *pfVar18->a;
  bVar2 = (*TextUtils_isEmpty)(pCVar12);
  if (bVar2) {
    bVar2 = false;
  }
  else {
    pBVar9 = (*D_d)(pCVar3);
    if (pBVar9 == (Bundle *)0x0) {
      pSVar13 = (CharSequence *)0x0;
    }
    else {
      pSVar13 = (*pBVar9->getString)(pBVar9,(String *)"org.chromium.webapk.shell_apk.runtimeHost");
    }
    bVar2 = (*TextUtils_isEmpty)(pSVar13);
    pCVar20 = (CharSequence *)0x0;
    if (!bVar2) {
      ref_00 = (*pCVar3->getPackageManager)(pCVar3);
      bVar2 = (*TextUtils_isEmpty)(pSVar13);
      if (bVar2) {
        bVar10 = 0;
      }
      else {
        pAVar7 = (*ref_00->getApplicationInfo)(ref_00,pSVar13,0);
        bVar10 = *pAVar7->enabled;
      }
      if (bVar10 != 0) {
        pCVar20 = pSVar13;
      }
    }
    bVar2 = (*TextUtils_equals)(pCVar12,pCVar20);
  }
  pSVar13 = *pfVar18->a;
  pCVar16 = *pfVar18->b;
  pUVar8 = (*Uri_parse)(pSVar17);
  pSVar21 = (String *)"android.intent.action.VIEW";
  if (bVar2 == false) {
    pIVar11 = new Intent(pSVar21,pUVar8);
  }
  else {
    pIVar11 = new Intent();
    (*pIVar11->setAction)
              (pIVar11,(String *)
                       "com.google.android.apps.chrome.webapps.WebappManager.ACTION_START_WEBAPP");
  }
  if (pCVar16 == (ComponentName *)0x0) {
    (*pIVar11->setPackage)(pIVar11,pSVar13);
  }
  else {
    pIVar14 = new Intent();
    pIVar14 = (*pIVar14->setAction)(pIVar14,pSVar21);
    pIVar14 = (*pIVar14->addCategory)(pIVar14,(String *)"android.intent.category.BROWSABLE");
    pUVar8 = (*Uri_parse)((String *)"http://");
    pIVar14 = (*pIVar14->setData)(pIVar14,pUVar8);
    (*pIVar11->setSelector)(pIVar11,pIVar14);
    (*pIVar11->setComponent)(pIVar11,pCVar16);
  }
  (*pIVar11->setFlags)(pIVar11,p3);
  pIVar14 = *p1->d;
  pBVar9 = (*pIVar14->getExtras)(pIVar14);
  if (pBVar9 != (Bundle *)0x0) {
    (*pIVar11->putExtras)(pIVar11,pBVar9);
  }
  (*pIVar11->removeExtra)(pIVar11,(String *)"org.chromium.webapk.relaunch");
  pIVar14 = (*pIVar11->putExtra)(pIVar11,(String *)"org.chromium.chrome.browser.webapp_url",pSVar17)
  ;
  pIVar14 = (*pIVar14->putExtra)
                      (pIVar14,(String *)"org.chromium.chrome.browser.webapp_source",*p1->f);
  pSVar17 = (*p0->getPackageName)(p0);
  pIVar14 = (*pIVar14->putExtra)
                      (pIVar14,(String *)"org.chromium.chrome.browser.webapk_package_name",pSVar17);
  pIVar14 = (*pIVar14->putExtra)
                      (pIVar14,(String *)
                               "org.chromium.webapk.selected_share_target_activity_class_name",
                       *p1->j);
  (*pIVar14->putExtra)
            (pIVar14,(String *)"org.chromium.chrome.browser.webapk_force_navigation",*p1->g);
  if (p2 != (Bundle *)0x0) {
    (*pIVar11->putExtras)(pIVar11,p2);
  }
  if ((*p1->c == false) && (lVar1 = *p1->h, -1 < lVar1)) {
    (*pIVar11->putExtra)(pIVar11,(String *)"org.chromium.chrome.browser.webapk_launch_time",lVar1);
  }
  lVar1 = *p1->i;
  if (-1 < lVar1) {
    (*pIVar11->putExtra)(pIVar11,(String *)"org.chromium.webapk.new_style_splash_shown_time",lVar1);
  }
  if (p4) {
    (*p0->startActivityForResult)(p0,pIVar11,0);
  }
  else {
    (*p0->startActivity)(p0,pIVar11);
  }
  return;
}



// === a @ 50007fa8 ===

/* Class: Le;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Le;( Landroid/content/Context;
    Landroid/content/Intent;
    Lf;
    Z
    J
    J
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 22
   Method Incoming Size: 8
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x6a5d
   Method ID Offset: 0x246c
    */

e * e::a(Context *p0,Intent *p1,f *p2,boolean p3,long p4,long p5)

{
  boolean bVar1;
  boolean bVar2;
  Bundle *ref;
  String *pSVar3;
  String *pSVar4;
  ComponentName *pCVar5;
  String *pSVar6;
  PackageManager *ref_00;
  ActivityInfo *pAVar7;
  int iVar8;
  Uri_Builder *ref_01;
  String *pSVar9;
  Uri *pUVar10;
  String *pSVar11;
  Uri_Builder *pUVar12;
  long lVar13;
  e *ref_02;
  undefined *puVar14;
  int iVar15;
  ArrayList *ref_03;
  Object *pOVar16;
  CharSequence *pCVar17;
  Bundle *ref_04;
  
  ref = (*D_d)(p0);
  ref_02 = (e *)0x0;
  if (ref == (Bundle *)0x0) {
    return (e *)0x0;
  }
  lVar13 = (*p1->getLongExtra)(p1,(String *)"org.chromium.chrome.browser.webapk_launch_time",-1);
  if (0 < lVar13) {
    p4 = lVar13;
  }
  pSVar3 = (*p1->getStringExtra)
                     (p1,(String *)"org.chromium.webapk.selected_share_target_activity_class_name");
  puVar14 = "android.intent.action.SEND";
  pSVar4 = (*p1->getAction)(p1);
  bVar1 = (*puVar14->equals)(puVar14,pSVar4);
  if (bVar1) {
LAB_50008018:
    pCVar5 = (*p1->getComponent)(p1);
    pSVar3 = (*pCVar5->getClassName)(pCVar5);
  }
  else {
    puVar14 = "android.intent.action.SEND_MULTIPLE";
    pSVar4 = (*p1->getAction)(p1);
    bVar1 = (*puVar14->equals)(puVar14,pSVar4);
    if (bVar1) goto LAB_50008018;
  }
  bVar1 = true;
  pSVar4 = (String *)"org.chromium.webapk.shell_apk.startUrl";
  iVar15 = 0;
  if (pSVar3 == (String *)0x0) {
    pSVar6 = (*p1->getDataString)(p1);
    bVar1 = (*TextUtils_isEmpty)(pSVar6);
    if (bVar1) {
      pSVar6 = (*ref->getString)(ref,pSVar4);
      bVar1 = false;
    }
    else {
      pSVar6 = (*p1->getDataString)(p1);
      iVar15 = (*p1->getIntExtra)(p1,(String *)"org.chromium.chrome.browser.webapp_source",9);
      bVar1 = (*p1->getBooleanExtra)
                        (p1,(String *)"org.chromium.chrome.browser.webapk_force_navigation",true);
    }
  }
  else {
    pSVar6 = (*p0->getPackageName)(p0);
    pCVar5 = new ComponentName(pSVar6,pSVar3);
    ref_00 = (*p0->getPackageManager)(p0);
    pAVar7 = (*ref_00->getActivityInfo)(ref_00,pCVar5,0x80);
    if (pAVar7 == (ActivityInfo *)0x0) {
      ref_04 = (Bundle *)0x0;
    }
    else {
      ref_04 = *pAVar7->metaData;
    }
    if (ref_04 == (Bundle *)0x0) {
LAB_5000806a:
      pSVar6 = (String *)0x0;
    }
    else {
      pSVar6 = (*ref_04->getString)(ref_04,(String *)"org.chromium.webapk.shell_apk.shareMethod");
      bVar2 = (*TextUtils_isEmpty)(pSVar6);
      if (bVar2) {
        bVar2 = false;
      }
      else {
        pSVar6 = (*pSVar6->toUpperCase)(pSVar6,*Locale_ENGLISH);
        puVar14 = "POST";
        bVar2 = (*puVar14->equals)(puVar14,pSVar6);
      }
      pSVar6 = (String *)"org.chromium.webapk.shell_apk.shareAction";
      if (bVar2 == false) {
        pSVar6 = (*ref_04->getString)(ref_04,pSVar6);
        bVar2 = (*TextUtils_isEmpty)(pSVar6);
        if (bVar2) goto LAB_5000806a;
        ref_03 = new ArrayList();
        pSVar9 = (*ref_04->getString)
                           (ref_04,(String *)"org.chromium.webapk.shell_apk.shareParamTitle");
        pSVar11 = (*p1->getStringExtra)(p1,(String *)"android.intent.extra.SUBJECT");
        pOVar16 = new Object(pSVar9,pSVar11);
        (*ref_03->add)(ref_03,pOVar16);
        pSVar9 = (*ref_04->getString)
                           (ref_04,(String *)"org.chromium.webapk.shell_apk.shareParamText");
        pSVar11 = (*p1->getStringExtra)(p1,(String *)"android.intent.extra.TEXT");
        pOVar16 = new Object(pSVar9,pSVar11);
        (*ref_03->add)(ref_03,pOVar16);
        pUVar12 = new Uri$Builder();
        iVar8 = (*ref_03->size)(ref_03);
        while (iVar15 < iVar8) {
          pOVar16 = (*ref_03->get)(ref_03,iVar15);
          iVar15 = iVar15 + 1;
          checkCast(pOVar16,Pair);
          pCVar17 = *pOVar16->first;
          checkCast(pCVar17,CharSequence);
          bVar2 = (*TextUtils_isEmpty)(pCVar17);
          if (!bVar2) {
            pCVar17 = *pOVar16->second;
            checkCast(pCVar17,CharSequence);
            bVar2 = (*TextUtils_isEmpty)(pCVar17);
            if (!bVar2) {
              pSVar11 = *pOVar16->first;
              checkCast(pSVar11,String);
              pSVar9 = *pOVar16->second;
              checkCast(pSVar9,String);
              (*pUVar12->appendQueryParameter)(pUVar12,pSVar11,pSVar9);
            }
          }
        }
        pUVar10 = (*Uri_parse)(pSVar6);
        ref_01 = (*pUVar10->buildUpon)(pUVar10);
        pUVar10 = (*pUVar12->build)(pUVar12);
        pSVar9 = (*pUVar10->toString)(pUVar10);
        bVar2 = (*TextUtils_isEmpty)(pSVar9);
        if (!bVar2) {
          pSVar6 = (*pSVar9->replace)(pSVar9,(CharSequence *)"%20",(CharSequence *)"+");
          pSVar6 = (*pSVar6->substring)(pSVar6,1);
          (*ref_01->encodedQuery)(ref_01,pSVar6);
          pUVar10 = (*ref_01->build)(ref_01);
          pSVar6 = (*pUVar10->toString)(pUVar10);
        }
      }
      else {
        pSVar6 = (*ref_04->getString)(ref_04,pSVar6);
      }
    }
    iVar15 = 0xd;
  }
  if (pSVar6 == (String *)0x0) {
    return (e *)0x0;
  }
  pSVar4 = (*ref->getString)(ref,pSVar4);
  pSVar9 = (*ref->getString)(ref,(String *)"org.chromium.webapk.shell_apk.loggedIntentUrlParam");
  bVar2 = (*TextUtils_isEmpty)(pSVar9);
  if (!bVar2) {
    bVar2 = (*pSVar6->startsWith)(pSVar6,pSVar4);
    if (bVar2) {
      pUVar10 = (*Uri_parse)(pSVar6);
      pSVar11 = (*pUVar10->getQueryParameter)(pUVar10,pSVar9);
      bVar2 = (*TextUtils_isEmpty)(pSVar11);
      if (!bVar2) goto LAB_500082a6;
    }
    pUVar10 = (*Uri_parse)(pSVar4);
    pUVar12 = (*pUVar10->buildUpon)(pUVar10);
    (*pUVar12->appendQueryParameter)(pUVar12,pSVar9,pSVar6);
    pSVar6 = (*pUVar12->toString)(pUVar12);
  }
LAB_500082a6:
  if ((pSVar6 != (String *)0x0) &&
     ((bVar2 = (*pSVar6->startsWith)(pSVar6,(String *)"http:"), bVar2 ||
      (bVar2 = (*pSVar6->startsWith)(pSVar6,(String *)"https:"), bVar2)))) {
    bVar2 = (*ref->getBoolean)(ref,(String *)"org.chromium.webapk.shell_apk.isNewStyleWebApk");
    ref_02 = new e();
    *ref_02->a = bVar2;
    *ref_02->b = p2;
    *ref_02->c = p3;
    *ref_02->d = p1;
    *ref_02->e = pSVar6;
    *ref_02->f = iVar15;
    *ref_02->g = bVar1;
    *ref_02->h = p4;
    *ref_02->i = p5;
    *ref_02->j = pSVar3;
  }
  return ref_02;
}



// === g @ 50008334 ===

/* Class: Lg;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_STATIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 10
   Method Incoming Size: 0
   Method Outgoing Size: 2
   Method Debug Info Offset: 0x6aaf
   Method ID Offset: 0x2474
    */

void g::g(void)

{
  Object **in_resultreg;
  List *pLVar1;
  HashSet *local_0;
  
  filledNewArrayRange(Landroid/app/Activity;,0xc1,"com.google.android.apps.chrome");
  pLVar1 = (*Arrays_asList)(in_resultreg);
  local_0 = new HashSet(pLVar1);
  *g_a = local_0;
  return;
}



// === a @ 50008388 ===

/* Class: Lg;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Lf;( Landroid/content/Context;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 6
   Method Incoming Size: 1
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6ac3
   Method ID Offset: 0x247c
    */

f * g::a(Context *p0)

{
  boolean bVar1;
  Bundle *ref;
  PackageManager *pPVar2;
  Uri *pUVar3;
  ResolveInfo *pRVar4;
  ApplicationInfo *pAVar5;
  String *pSVar6;
  Intent *pIVar7;
  ActivityInfo *pAVar8;
  byte bVar9;
  ComponentName *ref_00;
  byte bVar10;
  f *pfVar11;
  
  ref = (*D_d)(p0);
  if (ref == (Bundle *)0x0) {
    pSVar6 = (CharSequence *)0x0;
  }
  else {
    pSVar6 = (*ref->getString)(ref,(String *)"org.chromium.webapk.shell_apk.runtimeHost");
  }
  bVar1 = (*TextUtils_isEmpty)(pSVar6);
  bVar10 = 0;
  if (!bVar1) {
    pPVar2 = (*p0->getPackageManager)(p0);
    bVar1 = (*TextUtils_isEmpty)(pSVar6);
    if (bVar1) {
      bVar9 = 0;
    }
    else {
      pAVar5 = (*pPVar2->getApplicationInfo)(pPVar2,pSVar6,0);
      bVar9 = *pAVar5->enabled;
    }
    if (bVar9 != 0) goto LAB_500083e0;
  }
  pSVar6 = (CharSequence *)0x0;
LAB_500083e0:
  bVar1 = (*TextUtils_isEmpty)(pSVar6);
  if (!bVar1) {
    pfVar11 = new f();
    *pfVar11->a = pSVar6;
    *pfVar11->b = (ComponentName *)0x0;
    return pfVar11;
  }
  pPVar2 = (*p0->getPackageManager)(p0);
  pIVar7 = new Intent();
  pIVar7 = (*pIVar7->setAction)(pIVar7,(String *)"android.intent.action.VIEW");
  pIVar7 = (*pIVar7->addCategory)(pIVar7,(String *)"android.intent.category.BROWSABLE");
  pUVar3 = (*Uri_parse)((String *)"http://");
  pIVar7 = (*pIVar7->setData)(pIVar7,pUVar3);
  pRVar4 = (*pPVar2->resolveActivity)(pPVar2,pIVar7,0x10000);
  if ((pRVar4 == (ResolveInfo *)0x0) || (*pRVar4->activityInfo == (ActivityInfo *)0x0)) {
    ref_00 = (ComponentName *)0x0;
  }
  else {
    pAVar8 = *pRVar4->activityInfo;
    ref_00 = new ComponentName(*pAVar8->packageName,*pAVar8->name);
  }
  if (ref_00 != (ComponentName *)0x0) {
    pSVar6 = (*ref_00->getPackageName)(ref_00);
    bVar1 = (*TextUtils_isEmpty)(pSVar6);
    if (!bVar1) {
      pSVar6 = (*ref_00->getPackageName)(ref_00);
      bVar1 = (*TextUtils_isEmpty)(pSVar6);
      if (!bVar1) {
        pAVar5 = (*pPVar2->getApplicationInfo)(pPVar2,pSVar6,0);
        bVar10 = *pAVar5->enabled;
      }
      if (bVar10 != 0) {
        pfVar11 = new f();
        pSVar6 = (*ref_00->getPackageName)(ref_00);
        *pfVar11->a = pSVar6;
        *pfVar11->b = ref_00;
        return pfVar11;
      }
    }
  }
  return (f *)0x0;
}



// === b @ 500084f4 ===

/* Class: Lg;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Z( Le;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 3
   Method Incoming Size: 1
   Method Outgoing Size: 2
   Method Debug Info Offset: 0x6b1d
   Method ID Offset: 0x2484
    */

boolean g::b(e *p0)

{
  boolean bVar1;
  String *pSVar2;
  f *pfVar3;
  
  if (*p0->a != false) {
    pfVar3 = *p0->b;
    pSVar2 = *pfVar3->a;
    bVar1 = (*pSVar2->equals)(pSVar2,(Object *)"org.chromium.arc.intent_helper");
    if ((!bVar1) &&
       (pSVar2 = *pfVar3->a, bVar1 = (*pSVar2->equals)(pSVar2,(Object *)"org.chromium.arc.webapk"),
       !bVar1)) {
      return true;
    }
  }
  return false;
}



// === h @ 50008540 ===

/* Class: Lh;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Landroid/os/Binder;
   Interfaces: 
    Landroid/os/IInterface;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Lorg/chromium/webapk/shell_apk/IdentityService;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 2
   Method Incoming Size: 2
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6b32
   Method ID Offset: 0x248c
    */

void h::h(h *this,IdentityService *p1)

{
  *this->a = p1;
  (*this-><init>)(this);
  (*this->attachInterface)
            (this,this,(String *)"org.chromium.webapk.lib.common.identity_service.IIdentityService")
  ;
  return;
}



// === asBinder @ 50008568 ===

/* Class: Lh;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Landroid/os/Binder;
   Interfaces: 
    Landroid/os/IInterface;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/os/IBinder;(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 0
   Method Debug Info Offset: 0x68bf
   Method ID Offset: 0x2494
    */

IBinder * h::asBinder(h *this)

{
  return this;
}



// === onTransact @ 5000857c ===

/* Class: Lh;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Landroid/os/Binder;
   Interfaces: 
    Landroid/os/IInterface;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Z( I
    Landroid/os/Parcel;
    Landroid/os/Parcel;
    I
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 8
   Method Incoming Size: 5
   Method Outgoing Size: 5
   Method Debug Info Offset: 0x6b3b
   Method ID Offset: 0x249c
    */

boolean h::onTransact(h *this,int p1,Parcel *p2,Parcel *p3,int p4)

{
  boolean bVar1;
  Context *pCVar2;
  f *pfVar3;
  String *local_0;
  IdentityService *ref;
  
  local_0 = (String *)"org.chromium.webapk.lib.common.identity_service.IIdentityService";
  if ((0 < p1) && (p1 < 0x1000000)) {
    (*p2->enforceInterface)(p2,local_0);
  }
  if (p1 == 0x5f4e5446) {
    (*p3->writeString)(p3,local_0);
    return true;
  }
  if (p1 != 1) {
    bVar1 = (*super->onTransact)(this,p1,p2,p3,p4);
    return bVar1;
  }
  ref = *this->a;
  pCVar2 = (*ref->getApplicationContext)(ref);
  pfVar3 = (*g_a)(pCVar2);
  if (pfVar3 == (f *)0x0) {
    local_0 = (String *)0x0;
  }
  else {
    local_0 = *pfVar3->a;
  }
  (*p3->writeNoException)(p3);
  (*p3->writeString)(p3,local_0);
  return true;
}



// === i @ 500085f4 ===

/* Class: Li;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Landroid/content/DialogInterface$OnClickListener;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Ll;
    Lm;
    Ljava/lang/String;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 4
   Method Incoming Size: 4
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6b4c
   Method ID Offset: 0x24a4
    */

void i::i(i *this,l *p1,m *p2,String *p3)

{
  (*this-><init>)(this);
  *this->a = p1;
  *this->b = p2;
  *this->c = p3;
  return;
}



// === onClick @ 50008618 ===

/* Class: Li;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Landroid/content/DialogInterface$OnClickListener;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/content/DialogInterface;
    I
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 7
   Method Incoming Size: 3
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6b57
   Method ID Offset: 0x24ac
    */

void i::onClick(i *this,DialogInterface *p1,int p2)

{
  Uri *pUVar1;
  m *pmVar2;
  n *ref;
  o *ref_00;
  Activity *ref_01;
  StringBuilder *ref_02;
  Intent *ref_03;
  String *pSVar3;
  
  *(*this->a)->a = true;
  pSVar3 = *this->c;
  pmVar2 = *this->b;
  ref_00 = *pmVar2->b;
  (*ref_00->getClass)(ref_00);
  ref_01 = *ref_00->b;
  ref_02 = new StringBuilder((String *)"market://details?id=");
  (*ref_02->append)(ref_02,pSVar3);
  pSVar3 = (*ref_02->toString)(ref_02);
  pUVar1 = (*Uri_parse)(pSVar3);
  ref_03 = new Intent((String *)"android.intent.action.VIEW",pUVar1);
  (*ref_03->addFlags)(ref_03,0x10000000);
  (*ref_01->startActivity)(ref_01,ref_03);
  ref = *pmVar2->a;
  (*ref->a)(ref,(f *)0x0,true);
  return;
}



// === onClick @ 500086a4 ===

/* Class: Lj;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Landroid/content/DialogInterface$OnClickListener;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/content/DialogInterface;
    I
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 3
   Method Incoming Size: 3
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6b76
   Method ID Offset: 0x24b4
    */

void j::onClick(j *this,DialogInterface *p1,int p2)

{
  (*p1->cancel)(p1);
  return;
}



// === k @ 500086bc ===

/* Class: Lk;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Landroid/content/DialogInterface$OnDismissListener;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Ll;
    Lm;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 3
   Method Incoming Size: 3
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6b7d
   Method ID Offset: 0x2734
    */

void k::k(k *this,l *p1,m *p2)

{
  (*this-><init>)(this);
  *this->a = p1;
  *this->b = p2;
  return;
}



// === onDismiss @ 500086dc ===

/* Class: Lk;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Landroid/content/DialogInterface$OnDismissListener;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/content/DialogInterface;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 4
   Method Incoming Size: 2
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6b86
   Method ID Offset: 0x273c
    */

void k::onDismiss(k *this,DialogInterface *p1)

{
  n *ref;
  
  if (*(*this->a)->a != false) {
    return;
  }
  ref = *(*this->b)->a;
  (*ref->a)(ref,(f *)0x0,true);
  return;
}



// === m @ 50008710 ===

/* Class: Lm;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Lo;
    Ln;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 3
   Method Incoming Size: 3
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6b7d
   Method ID Offset: 0x2744
    */

void m::m(m *this,o *p1,n *p2)

{
  (*this-><init>)(this);
  *this->a = p2;
  *this->b = p1;
  return;
}



// === o @ 50008730 ===

/* Class: Lo;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/app/Activity;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 2
   Method Incoming Size: 2
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6b94
   Method ID Offset: 0x2754
    */

void o::o(o *this,Activity *p1)

{
  Context *pCVar1;
  
  (*this-><init>)(this);
  *this->b = p1;
  pCVar1 = (*p1->getApplicationContext)(p1);
  *this->a = pCVar1;
  return;
}



// === a @ 50008758 ===

/* Class: Lo;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Ln;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 11
   Method Incoming Size: 2
   Method Outgoing Size: 5
   Method Debug Info Offset: 0x6b9e
   Method ID Offset: 0x275c
    */

void o::a(o *this,n *p1)

{
  boolean bVar1;
  Bundle *ref;
  String *pSVar2;
  f *pfVar3;
  String *pSVar4;
  String *pSVar5;
  LayoutInflater *ref_00;
  View *ref_01;
  Object **ppOVar6;
  Resources *pRVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  View *pVVar11;
  AlertDialog_Builder *pAVar12;
  AlertDialog *ref_02;
  Context *local_0;
  AlertDialog_Builder *ref_03;
  DialogInterface_OnDismissListener *ref_04;
  Context *ref_05;
  DialogInterface_OnClickListener *pDVar13;
  StringBuilder *ref_06;
  m *ref_07;
  View *ref_08;
  l *ref_09;
  
  local_0 = *this->a;
  ref = (*D_d)(local_0);
  if (ref == (Bundle *)0x0) {
    (*p1->a)(p1,(f *)0x0,false);
    return;
  }
  pSVar2 = (*local_0->getPackageName)(local_0);
  ref_06 = new StringBuilder((String *)"Package name of the WebAPK:");
  (*ref_06->append)(ref_06,pSVar2);
  pSVar2 = (*ref_06->toString)(ref_06);
  (*Log_v)((String *)"cr_LaunchHostBrowserSelector",pSVar2);
  pfVar3 = (*g_a)(local_0);
  if ((pfVar3 != (f *)0x0) && (bVar1 = (*TextUtils_isEmpty)(*pfVar3->a), !bVar1)) {
    (*p1->a)(p1,pfVar3,false);
    return;
  }
  pSVar2 = (*ref->getString)(ref,(String *)"org.chromium.webapk.shell_apk.runtimeHost");
  pSVar4 = (*ref->getString)(ref,(String *)
                                 "org.chromium.webapk.shell_apk.runtimeHostApplicationName");
  bVar1 = (*TextUtils_isEmpty)(pSVar2);
  if (bVar1) {
    pSVar2 = (String *)"com.android.chrome";
    pSVar4 = (String *)"Google Chrome";
  }
  ref_07 = new m(this,p1);
  pSVar5 = (*local_0->getString)(local_0,0x7f080006);
  local_0 = *this->b;
  ref_00 = (*LayoutInflater_from)(local_0);
  ref_01 = (*ref_00->inflate)(ref_00,0x7f060000,(ViewGroup *)0x0);
  ref_08 = (View *)new(TextView);
  ppOVar6 = (Object **)(*ref_08-><init>)(ref_08,local_0);
  filledNewArray([Ljava/lang/Object;,pSVar5);
  pSVar5 = (*local_0->getString)(local_0,0x7f080005,ppOVar6);
  (*ref_08->setText)(ref_08,pSVar5);
  pRVar7 = (*local_0->getResources)(local_0);
  iVar8 = (*pRVar7->getColor)(pRVar7,0x7f030004,(Resources_Theme *)0x0);
  (*ref_08->setTextColor)(ref_08,iVar8);
  fVar9 = (*pRVar7->getDimension)(pRVar7,0x7f040002);
  (*ref_08->setTextSize)(ref_08,0,fVar9);
  iVar8 = (*pRVar7->getDimensionPixelSize)(pRVar7,0x7f040000);
  iVar10 = (*pRVar7->getDimensionPixelSize)(pRVar7,0x7f040005);
  (*ref_08->setPaddingRelative)(ref_08,iVar8,iVar8,iVar8,iVar10);
  iVar10 = (*pRVar7->getDimensionPixelSize)(pRVar7,0x7f040001);
  (*ref_01->setPaddingRelative)(ref_01,iVar8,iVar10,iVar8,iVar8);
  pVVar11 = (*ref_01->findViewById)(ref_01,0x7f010001);
  checkCast(pVVar11,ImageView);
  (*pVVar11->setImageResource)(pVVar11,0x7f050001);
  pVVar11 = (*ref_01->findViewById)(ref_01,0x7f010002);
  checkCast(pVVar11,TextView);
  (*pVVar11->setText)(pVVar11,pSVar4);
  pRVar7 = (*local_0->getResources)(local_0);
  iVar8 = (*pRVar7->getDimensionPixelSize)(pRVar7,0x7f040003);
  (*pVVar11->setPaddingRelative)(pVVar11,iVar8,0,0,0);
  ref_09 = new l();
  ref_05 = new Context(local_0,0x1030132);
  ref_03 = new AlertDialog$Builder(ref_05);
  pAVar12 = (*ref_03->setCustomTitle)(ref_03,ref_08);
  pAVar12 = (*pAVar12->setView)(pAVar12,ref_01);
  pDVar13 = new DialogInterface$OnClickListener();
  pAVar12 = (*pAVar12->setNegativeButton)(pAVar12,0x7f080001,pDVar13);
  pDVar13 = new DialogInterface$OnClickListener(ref_09,ref_07,pSVar2);
  (*pAVar12->setPositiveButton)(pAVar12,0x7f080004,pDVar13);
  ref_02 = (*ref_03->create)(ref_03);
  ref_04 = new DialogInterface$OnDismissListener(ref_09,ref_07);
  (*ref_02->setOnDismissListener)(ref_02,ref_04);
  (*ref_02->show)(ref_02);
  return;
}



// === IdentityService @ 50008990 ===

/* Class: Lorg/chromium/webapk/shell_apk/IdentityService;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Service;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 2
   Method Incoming Size: 1
   Method Outgoing Size: 2
   Method Debug Info Offset: 0x6c1c
   Method ID Offset: 0x2764
    */

void org::chromium::webapk::shell_apk::IdentityService::IdentityService(IdentityService *this)

{
  h *ref;
  
  (*this-><init>)(this);
  ref = new h(this);
  *this->a = ref;
  return;
}



// === onBind @ 500089b8 ===

/* Class: Lorg/chromium/webapk/shell_apk/IdentityService;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Service;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/os/IBinder;( Landroid/content/Intent;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 2
   Method Incoming Size: 2
   Method Outgoing Size: 0
   Method Debug Info Offset: 0x6930
   Method ID Offset: 0x276c
    */

IBinder * org::chromium::webapk::shell_apk::IdentityService::onBind
                    (IdentityService *this,Intent *p1)

{
  return *this->a;
}



// === ManageDataLauncherActivity @ 500089d0 ===

/* Class: Lorg/chromium/webapk/shell_apk/ManageDataLauncherActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6c24
   Method ID Offset: 0x2774
    */

void org::chromium::webapk::shell_apk::ManageDataLauncherActivity::ManageDataLauncherActivity
               (ManageDataLauncherActivity *this)

{
  (*this-><init>)(this);
  return;
}



// === b @ 500089e8 ===

/* Class: Lorg/chromium/webapk/shell_apk/ManageDataLauncherActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Z( Landroid/content/Context;
    Ljava/lang/String;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 5
   Method Incoming Size: 2
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6c29
   Method ID Offset: 0x2784
    */

boolean org::chromium::webapk::shell_apk::ManageDataLauncherActivity::b(Context *p0,String *p1)

{
  boolean bVar1;
  Bundle *ref;
  PackageManager *ref_00;
  List *ref_01;
  int iVar2;
  Intent *ref_02;
  
  ref = (*D_d)(p0);
  if ((ref != (Bundle *)0x0) &&
     (bVar1 = (*ref->getBoolean)(ref,(String *)
                                     "org.chromium.webapk.shell_apk.enableSiteSettingsShortcut",
                                 false), bVar1)) {
    ref_02 = new Intent((String *)"android.support.customtabs.action.CustomTabsService");
    (*ref_02->addCategory)
              (ref_02,(String *)"androidx.browser.trusted.category.LaunchWebApkSiteSettings");
    (*ref_02->setPackage)(ref_02,p1);
    ref_00 = (*p0->getPackageManager)(p0);
    ref_01 = (*ref_00->queryIntentServices)(ref_00,ref_02,0x40);
    iVar2 = (*ref_01->size)(ref_01);
    if (0 < iVar2) {
      return true;
    }
  }
  return false;
}



// === a @ 50008a5c ===

/* Class: Lorg/chromium/webapk/shell_apk/ManageDataLauncherActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 4
   Method Incoming Size: 1
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6c48
   Method ID Offset: 0x277c
    */

void org::chromium::webapk::shell_apk::ManageDataLauncherActivity::a
               (ManageDataLauncherActivity *this)

{
  PackageManager *pPVar1;
  ApplicationInfo *pAVar2;
  CharSequence *ref;
  Object **ppOVar3;
  String *pSVar4;
  Toast *ref_00;
  
  pPVar1 = (*this->getPackageManager)(this);
  pAVar2 = (*pPVar1->getApplicationInfo)(pPVar1,*this->a,0);
  pPVar1 = (*this->getPackageManager)(this);
  ref = (*pPVar1->getApplicationLabel)(pPVar1,pAVar2);
  ppOVar3 = (Object **)(*ref->toString)(ref);
  filledNewArray([Ljava/lang/Object;,ppOVar3);
  pSVar4 = (*this->getString)(this,0x7f080007,ppOVar3);
  ref_00 = (*Toast_makeText)(this,pSVar4,1);
  (*ref_00->show)(ref_00);
  (*this->finish)(this);
  return;
}



// === onCreate @ 50008adc ===

/* Class: Lorg/chromium/webapk/shell_apk/ManageDataLauncherActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/os/Bundle;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 4
   Method Incoming Size: 2
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6c64
   Method ID Offset: 0x278c
    */

void org::chromium::webapk::shell_apk::ManageDataLauncherActivity::onCreate
               (ManageDataLauncherActivity *this,Bundle *p1)

{
  boolean bVar1;
  Intent *pIVar2;
  String *pSVar3;
  Uri *pUVar4;
  ViewGroup_LayoutParams *ref;
  View *ref_00;
  View *ref_01;
  
  (*super->onCreate)(this,p1);
  pIVar2 = (*this->getIntent)(this);
  pSVar3 = (*pIVar2->getStringExtra)(pIVar2,(String *)"PROVIDER_PACKAGE");
  *this->a = pSVar3;
  pIVar2 = (*this->getIntent)(this);
  pSVar3 = (*pIVar2->getStringExtra)(pIVar2,(String *)"SITE_SETTINGS_URL");
  pUVar4 = (*Uri_parse)(pSVar3);
  *this->b = pUVar4;
  bVar1 = (*ManageDataLauncherActivity_b)(this,*this->a);
  if (!bVar1) {
    (*this->a)(this);
    return;
  }
  ref_01 = new View(this);
  ref = new ViewGroup$LayoutParams(-2,-2);
  *ref->gravity = 0x11;
  (*ref_01->setLayoutParams)(ref_01,ref);
  ref_00 = new View(this);
  (*ref_00->addView)(ref_00,ref_01);
  (*this->setContentView)(this,ref_00);
  pIVar2 = new Intent();
  (*pIVar2->setAction)
            (pIVar2,(String *)
                    "android.support.customtabs.action.ACTION_MANAGE_TRUSTED_WEB_ACTIVITY_DATA");
  (*pIVar2->setPackage)(pIVar2,*this->a);
  (*pIVar2->setData)(pIVar2,*this->b);
  (*pIVar2->putExtra)(pIVar2,(String *)"org.chromium.webapk.is_webapk",true);
  (*this->startActivityForResult)(this,pIVar2,0);
  (*this->finish)(this);
  return;
}



// === onStop @ 50008bd4 ===

/* Class: Lorg/chromium/webapk/shell_apk/ManageDataLauncherActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6c9a
   Method ID Offset: 0x2794
    */

void org::chromium::webapk::shell_apk::ManageDataLauncherActivity::onStop
               (ManageDataLauncherActivity *this)

{
  (*super->onStop)(this);
  (*this->finish)(this);
  return;
}



// === NotificationPermissionRequestActivity @ 50008bf4 ===

/* Class: Lorg/chromium/webapk/shell_apk/NotificationPermissionRequestActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6c24
   Method ID Offset: 0x279c
    */

void org::chromium::webapk::shell_apk::NotificationPermissionRequestActivity::
     NotificationPermissionRequestActivity(NotificationPermissionRequestActivity *this)

{
  (*this-><init>)(this);
  return;
}



// === onCreate @ 50008c0c ===

/* Class: Lorg/chromium/webapk/shell_apk/NotificationPermissionRequestActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/os/Bundle;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 5
   Method Incoming Size: 2
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x6ca0
   Method ID Offset: 0x27a4
    */

void org::chromium::webapk::shell_apk::NotificationPermissionRequestActivity::onCreate
               (NotificationPermissionRequestActivity *this,Bundle *p1)

{
  Intent *pIVar1;
  String *pSVar2;
  Parcelable *pPVar3;
  Context *ref;
  String **ppSVar4;
  Object *ref_00;
  String *pSVar5;
  NotificationChannel *ref_01;
  
  (*super->onCreate)(this,p1);
  pSVar5 = (String *)"PermissionRequestActivity";
  if (*Build_VERSION_SDK_INT < 0x21) {
    (*Log_w)(pSVar5,(String *)"Cannot request notification permission before Android T.");
    (*this->finish)(this);
    return;
  }
  pIVar1 = (*this->getIntent)(this);
  pSVar2 = (*pIVar1->getStringExtra)(pIVar1,(String *)"notificationChannelName");
  *this->a = pSVar2;
  pIVar1 = (*this->getIntent)(this);
  pSVar2 = (*pIVar1->getStringExtra)(pIVar1,(String *)"notificationChannelId");
  *this->b = pSVar2;
  pIVar1 = (*this->getIntent)(this);
  pPVar3 = (*pIVar1->getParcelableExtra)(pIVar1,(String *)"messenger");
  checkCast(pPVar3,Messenger);
  *this->c = pPVar3;
  if (((*this->a != (String *)0x0) && (*this->b != (String *)0x0)) && (pPVar3 != (Parcelable *)0x0))
  {
    ref = (*this->getApplicationContext)(this);
    ppSVar4 = (String **)(*ref->getApplicationInfo)(ref);
    if (*ppSVar4->targetSdkVersion < 0x21) {
      ref_01 = new NotificationChannel(*this->b,*this->a,3);
      ref_00 = (*this->getSystemService)(this,(String *)"notification");
      checkCast(ref_00,NotificationManager);
      ppSVar4 = (String **)(*ref_00->createNotificationChannel)(ref_00,ref_01);
    }
    filledNewArray([Ljava/lang/String;,"android.permission.POST_NOTIFICATIONS");
    (*this->requestPermissions)(this,ppSVar4,0);
    return;
  }
  (*Log_w)(pSVar5,(String *)"Finishing because not all required extras were provided.");
  (*this->finish)(this);
  return;
}



// === onRequestPermissionsResult @ 50008d10 ===

/* Class: Lorg/chromium/webapk/shell_apk/NotificationPermissionRequestActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( I
    [Ljava/lang/String;
    [I
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 8
   Method Incoming Size: 4
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x6ce0
   Method ID Offset: 0x27ac
    */

void org::chromium::webapk::shell_apk::NotificationPermissionRequestActivity::
     onRequestPermissionsResult
               (NotificationPermissionRequestActivity *this,int p1,String **p2,int *p3)

{
  boolean bVar1;
  Context *ref;
  SharedPreferences *ref_00;
  SharedPreferences_Editor *pSVar2;
  Object *ref_01;
  Message *ref_02;
  int iVar3;
  uint uVar4;
  Messenger *ref_03;
  Bundle *ref_04;
  
  uVar4 = 0;
  iVar3 = 0;
  do {
    if (p2->length <= iVar3) {
LAB_50008d6e:
      if (uVar4 == 0) {
        ref_01 = (*this->getSystemService)(this,(String *)"notification");
        checkCast(ref_01,NotificationManager);
        bVar1 = (*ref_01->areNotificationsEnabled)(ref_01);
        uVar4 = (uint)bVar1;
      }
      ref_03 = *this->c;
      ref_04 = new Bundle();
      (*ref_04->putInt)(ref_04,(String *)"permissionStatus",uVar4 ^ 1);
      ref_02 = (*Message_obtain)();
      (*ref_02->setData)(ref_02,ref_04);
      (*ref_03->send)(ref_03,ref_02);
      (*this->finish)(this);
      return;
    }
    bVar1 = (*p2[iVar3]->equals)(p2[iVar3],(Object *)"android.permission.POST_NOTIFICATIONS");
    if (bVar1) {
      ref = (*this->getApplicationContext)(this);
      ref_00 = (*ref->getSharedPreferences)
                         (ref,(String *)"org.chromium.webapk.shell_apk.PrefUtils",0);
      pSVar2 = (*ref_00->edit)(ref_00);
      pSVar2 = (*pSVar2->putBoolean)(pSVar2,(String *)"HAS_REQUESTED_NOTIFICATION_PERMISSION",true);
      (*pSVar2->apply)(pSVar2);
      if (p3[iVar3] == 0) {
        uVar4 = 1;
      }
      goto LAB_50008d6e;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



// === TransparentLauncherActivity @ 50008de8 ===

/* Class: Lorg/chromium/webapk/shell_apk/TransparentLauncherActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6c24
   Method ID Offset: 0x27b4
    */

void org::chromium::webapk::shell_apk::TransparentLauncherActivity::TransparentLauncherActivity
               (TransparentLauncherActivity *this)

{
  (*this-><init>)(this);
  return;
}



// === a @ 50008e00 ===

/* Class: Lorg/chromium/webapk/shell_apk/TransparentLauncherActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Le;
     )
   Method Access Flags:
    ACC_PUBLIC
   
   Method Register Size: 5
   Method Incoming Size: 2
   Method Outgoing Size: 5
   Method Debug Info Offset: 0x6cf8
   Method ID Offset: 0x27bc
    */

void org::chromium::webapk::shell_apk::TransparentLauncherActivity::a
               (TransparentLauncherActivity *this,e *p1)

{
  Context *pCVar1;
  
  if (p1 != (e *)0x0) {
    pCVar1 = (*this->getApplicationContext)(this);
    (*D_a)(pCVar1,p1);
    (*d_a)(this,p1,(Bundle *)0x0,0x10000000,false);
  }
  return;
}



// === onCreate @ 50008e34 ===

/* Class: Lorg/chromium/webapk/shell_apk/TransparentLauncherActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/os/Bundle;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 5
   Method Incoming Size: 2
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x6d05
   Method ID Offset: 0x27c4
    */

void org::chromium::webapk::shell_apk::TransparentLauncherActivity::onCreate
               (TransparentLauncherActivity *this,Bundle *p1)

{
  long lVar1;
  n *ref;
  o *ref_00;
  
  lVar1 = (*SystemClock_elapsedRealtime)();
  (*super->onCreate)(this,p1);
  ref_00 = new o(this);
  ref = new n(this,lVar1);
  (*ref_00->a)(ref_00,ref);
  return;
}



// === WebApkServiceFactory @ 50008e70 ===

/* Class: Lorg/chromium/webapk/shell_apk/WebApkServiceFactory;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Service;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6c24
   Method ID Offset: 0x27cc
    */

void org::chromium::webapk::shell_apk::WebApkServiceFactory::WebApkServiceFactory
               (WebApkServiceFactory *this)

{
  (*this-><init>)(this);
  return;
}



// === onBind @ 50008e88 ===

/* Class: Lorg/chromium/webapk/shell_apk/WebApkServiceFactory;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Service;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/os/IBinder;( Landroid/content/Intent;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 18
   Method Incoming Size: 2
   Method Outgoing Size: 5
   Method Debug Info Offset: 0x6d12
   Method ID Offset: 0x27d4
    */

IBinder * org::chromium::webapk::shell_apk::WebApkServiceFactory::onBind
                    (WebApkServiceFactory *this,Intent *p1)

{
  long lVar1;
  boolean bVar2;
  f *pfVar3;
  Looper *ref;
  Looper *pLVar4;
  Context *pCVar5;
  SharedPreferences *pSVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  SharedPreferences_Editor *ref_00;
  File *ref_01;
  AssetManager *pAVar10;
  InputStream *pIVar11;
  ClassLoader *pCVar12;
  Class *ref_02;
  Constructor *ref_03;
  PackageManager *ref_04;
  ApplicationInfo *pAVar13;
  Object **ppOVar14;
  Object *pOVar15;
  IBinder *pIVar16;
  String *pSVar17;
  HashSet *ref_05;
  Bundle *ref_06;
  AssertionError *ref_07;
  FileOutputStream *ref_08;
  File *ref_09;
  A *ref_10;
  String *pSVar18;
  int iVar19;
  String *pSVar20;
  String *pSVar21;
  StringBuilder *ref_11;
  File *ref_12;
  BaseDexClassLoader *pBVar22;
  String *pSVar23;
  String *pSVar24;
  byte *pbVar25;
  Scanner *ref_13;
  
  pfVar3 = (*g_a)(this);
  if (pfVar3 == (f *)0x0) {
    pSVar17 = (Object *)0x0;
  }
  else {
    pSVar17 = *pfVar3->a;
  }
  ref_05 = *g_a;
  bVar2 = (*ref_05->contains)(ref_05,pSVar17);
  pSVar18 = (String *)"cr_WebApkServiceFactory";
  if (!bVar2) {
    (*Log_w)(pSVar18,(String *)"Host browser does not support WebAPK notification delegation.");
    return (IBinder *)0x0;
  }
  ref = (*Looper_getMainLooper)();
  pLVar4 = (*Looper_myLooper)();
  bVar2 = (*ref->equals)(ref,pLVar4);
  if (!bVar2) {
    ref_07 = (AssertionError *)new(AssertionError);
    pIVar16 = (IBinder *)(*ref_07-><init>)(ref_07);
    throwException(ref_07);
    return pIVar16;
  }
  pCVar5 = (*this->getApplicationContext)(this);
  pCVar5 = (*pCVar5->createPackageContext)(pCVar5,pSVar17,0);
  iVar19 = -1;
  pSVar20 = (String *)"org.chromium.webapk.lib.runtime_library.WebApkServiceImpl";
  pSVar21 = (String *)"cr_HostBrowserClassLoader";
  if (pCVar5 == (Context *)0x0) {
    (*Log_w)(pSVar21,(String *)"Failed to get remote context.");
    pBVar22 = (BaseDexClassLoader *)0x0;
    goto LAB_50009194;
  }
  pSVar23 = (String *)"org.chromium.webapk.shell_apk";
  pSVar24 = (String *)"org.chromium.webapk.shell_apk.version_code";
  if (*c_a == (BaseDexClassLoader *)0x0) {
LAB_50008f4c:
    pSVar6 = (*this->getSharedPreferences)(this,pSVar23,0);
    pSVar23 = (String *)"org.chromium.webapk.shell_apk.dex_version";
    iVar7 = (*pSVar6->getInt)(pSVar6,pSVar23,-1);
    iVar8 = (*c_a)(pCVar5);
    iVar9 = (*pSVar6->getInt)(pSVar6,pSVar24,-1);
    if (iVar9 == iVar8) {
      iVar9 = -1;
    }
    else {
      pAVar10 = (*pCVar5->getAssets)(pCVar5);
      pIVar11 = (*pAVar10->open)(pAVar10,(String *)"webapk_dex_version.txt");
      ref_13 = new Scanner(pIVar11);
      iVar9 = (*ref_13->nextInt)(ref_13);
      (*ref_13->close)(ref_13);
      (*ref_13->close)(ref_13);
      ref_00 = (*pSVar6->edit)(pSVar6);
      (*ref_00->putInt)(ref_00,pSVar24,iVar8);
      (*ref_00->putInt)(ref_00,pSVar23,iVar9);
      (*ref_00->apply)(ref_00);
    }
    if (iVar9 == -1) {
      iVar9 = iVar7;
    }
    ref_01 = (*this->getDir)(this,(String *)"dex",0);
    if (iVar9 != iVar7) {
      (*Log_w)(pSVar21,(String *)"Delete cached dex files.");
      (*a_a)(ref_01);
    }
    ref_11 = new StringBuilder((String *)"webapk");
    (*ref_11->append)(ref_11,iVar9);
    (*ref_11->append)(ref_11,(String *)".dex");
    pSVar21 = (*ref_11->toString)(ref_11);
    ref_12 = new File(ref_01,pSVar21);
    bVar2 = (*ref_12->exists)(ref_12);
    if ((bVar2) && (lVar1 = (*ref_12->length)(ref_12), lVar1 != 0)) {
LAB_500090c8:
      ref_09 = new File(ref_01,(String *)"optimized");
      bVar2 = (*ref_09->exists)(ref_09);
      if ((!bVar2) && (bVar2 = (*ref_09->mkdirs)(ref_09), !bVar2)) goto LAB_50009080;
      pSVar21 = (*ref_12->getPath)(ref_12);
      pCVar12 = (*ClassLoader_getSystemClassLoader)();
      pBVar22 = new BaseDexClassLoader(pSVar21,ref_09,(String *)0x0,pCVar12);
      (*pBVar22->loadClass)(pBVar22,pSVar20);
    }
    else {
      bVar2 = (*ref_01->exists)(ref_01);
      if ((bVar2) || (bVar2 = (*ref_01->mkdirs)(ref_01), bVar2)) {
        pAVar10 = (*pCVar5->getAssets)(pCVar5);
        pIVar11 = (*pAVar10->open)(pAVar10,pSVar21);
        ref_08 = new FileOutputStream(ref_12);
        pbVar25 = (byte *)(new undefined4[0x4000]);
        while (iVar7 = (*pIVar11->read)(pIVar11,pbVar25,0,0x4000), iVar7 != -1) {
          (*ref_08->write)(ref_08,pbVar25,0,iVar7);
        }
        (*pIVar11->close)(pIVar11);
        (*ref_08->close)(ref_08);
        goto LAB_500090c8;
      }
LAB_50009080:
      pBVar22 = (BaseDexClassLoader *)0x0;
    }
    *c_a = pBVar22;
  }
  else {
    pSVar6 = (*this->getSharedPreferences)(this,pSVar23,0);
    iVar7 = (*pSVar6->getInt)(pSVar6,pSVar24,-1);
    iVar8 = (*c_a)(pCVar5);
    if (iVar8 != iVar7) goto LAB_50008f4c;
  }
  pBVar22 = *c_a;
LAB_50009194:
  if (pBVar22 != (BaseDexClassLoader *)0x0) {
    ref_02 = (*pBVar22->loadClass)(pBVar22,pSVar20);
    filledNewArray([Ljava/lang/Class;,Context,Bundle);
    ref_03 = (*ref_02->getConstructor)(ref_02,(Class **)ref_02);
    if (pSVar17 != (Object *)0x0) {
      ref_04 = (*this->getPackageManager)(this);
      pAVar13 = (*ref_04->getApplicationInfo)(ref_04,pSVar17,0x80);
      iVar19 = *pAVar13->uid;
    }
    ref_06 = new Bundle();
    (*ref_06->putInt)(ref_06,(String *)"small_icon_id",0x7f050002);
    ppOVar14 = (Object **)(*ref_06->putInt)(ref_06,(String *)"host_browser_uid",iVar19);
    filledNewArray([Ljava/lang/Object;,this,ref_06);
    pOVar15 = (*ref_03->newInstance)(ref_03,ppOVar14);
    checkCast(pOVar15,IBinder);
    ref_10 = new A(this,pOVar15,iVar19);
    return ref_10;
  }
  (*Log_w)(pSVar18,(String *)"Unable to create ClassLoader.");
  return (IBinder *)0x0;
}



// === H2OMainActivity @ 50009328 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/H2OMainActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Lorg/chromium/webapk/shell_apk/TransparentLauncherActivity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6c24
   Method ID Offset: 0x27dc
    */

void org::chromium::webapk::shell_apk::h2o::H2OMainActivity::H2OMainActivity(H2OMainActivity *this)

{
  (*this->TransparentLauncherActivity)(this);
  return;
}



// === a @ 50009340 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/H2OMainActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Lorg/chromium/webapk/shell_apk/TransparentLauncherActivity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Le;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 11
   Method Incoming Size: 2
   Method Outgoing Size: 5
   Method Debug Info Offset: 0x6e0c
   Method ID Offset: 0x27e4
    */

void org::chromium::webapk::shell_apk::h2o::H2OMainActivity::a(H2OMainActivity *this,e *p1)

{
  boolean bVar1;
  Context *ref;
  SharedPreferences *pSVar2;
  SharedPreferences_Editor *pSVar3;
  ComponentName *pCVar4;
  PackageManager *ref_00;
  long lVar5;
  long lVar6;
  Bundle *ref_01;
  String *pSVar7;
  ComponentName *ref_02;
  
  if (p1 == (e *)0x0) {
    return;
  }
  ref = (*this->getApplicationContext)(this);
  bVar1 = (*g_b)(p1);
  if (bVar1) {
    pSVar2 = (*B_a)(ref);
    lVar5 = (*System_currentTimeMillis)();
    pSVar7 = (String *)"org.chromium.webapk.shell_apk.request_host_browser_relaunch_timestamp";
    lVar6 = (*pSVar2->getLong)(pSVar2,pSVar7,-1);
    if (20000 < lVar5 - lVar6) {
      lVar5 = (*System_currentTimeMillis)();
      pSVar2 = (*this->getSharedPreferences)(this,(String *)"org.chromium.webapk.shell_apk",0);
      pSVar3 = (*pSVar2->edit)(pSVar2);
      (*pSVar3->putLong)(pSVar3,pSVar7,lVar5);
      (*pSVar3->apply)(pSVar3);
      ref_01 = new Bundle();
      (*ref_01->putBoolean)(ref_01,(String *)"org.chromium.webapk.relaunch",true);
      (*d_a)(this,p1,ref_01,0x10000000,false);
      ref_02 = new ComponentName(ref,H2OOpaqueMainActivity);
      pCVar4 = (*this->getComponentName)(this);
      pSVar2 = (*B_a)(ref);
      pSVar3 = (*pSVar2->edit)(pSVar2);
      (*pSVar3->commit)(pSVar3);
      ref_00 = (*ref->getPackageManager)(ref);
      (*ref_00->setComponentEnabledSetting)(ref_00,ref_02,1,1);
      (*ref_00->setComponentEnabledSetting)(ref_00,pCVar4,2,0);
      return;
    }
  }
  (*d_a)(this,p1,(Bundle *)0x0,0x10000000,false);
  return;
}



// === H2OOpaqueMainActivity @ 50009434 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/H2OOpaqueMainActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6c24
   Method ID Offset: 0x27ec
    */

void org::chromium::webapk::shell_apk::h2o::H2OOpaqueMainActivity::H2OOpaqueMainActivity
               (H2OOpaqueMainActivity *this)

{
  (*this-><init>)(this);
  return;
}



// === onCreate @ 5000944c ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/H2OOpaqueMainActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/os/Bundle;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 8
   Method Incoming Size: 2
   Method Outgoing Size: 6
   Method Debug Info Offset: 0x6e48
   Method ID Offset: 0x27f4
    */

void org::chromium::webapk::shell_apk::h2o::H2OOpaqueMainActivity::onCreate
               (H2OOpaqueMainActivity *this,Bundle *p1)

{
  Context *pCVar1;
  Intent *pIVar2;
  long lVar3;
  ComponentName *ref;
  
  lVar3 = (*SystemClock_elapsedRealtime)();
  (*super->onCreate)(this,p1);
  pCVar1 = (*this->getApplicationContext)(this);
  (*this->overridePendingTransition)(this,0,0);
  pIVar2 = (*this->getIntent)(this);
  ref = new ComponentName(pCVar1,SplashActivity);
  (*b_a)(pCVar1,pIVar2,(String *)0x0,lVar3,ref);
  (*this->finish)(this);
  return;
}



// === H2OTransparentLauncherActivity @ 500094a0 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/H2OTransparentLauncherActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Lorg/chromium/webapk/shell_apk/TransparentLauncherActivity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6c24
   Method ID Offset: 0x27fc
    */

void org::chromium::webapk::shell_apk::h2o::H2OTransparentLauncherActivity::
     H2OTransparentLauncherActivity(H2OTransparentLauncherActivity *this)

{
  (*this->TransparentLauncherActivity)(this);
  return;
}



// === a @ 500094b8 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/H2OTransparentLauncherActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Lorg/chromium/webapk/shell_apk/TransparentLauncherActivity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Le;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 13
   Method Incoming Size: 2
   Method Outgoing Size: 6
   Method Debug Info Offset: 0x6e5c
   Method ID Offset: 0x2804
    */

void org::chromium::webapk::shell_apk::h2o::H2OTransparentLauncherActivity::a
               (H2OTransparentLauncherActivity *this,e *p1)

{
  boolean bVar1;
  boolean bVar2;
  Context *pCVar3;
  PackageManager *pPVar4;
  int iVar5;
  Resources *pRVar6;
  Intent *pIVar7;
  SplashActivity *pSVar8;
  H2OMainActivity *pHVar9;
  ComponentName *pCVar10;
  
  if (p1 == (e *)0x0) {
    return;
  }
  pCVar3 = (*this->getApplicationContext)(this);
  (*D_a)(pCVar3,p1);
  bVar1 = (*g_b)(p1);
  pCVar3 = (*this->getApplicationContext)(this);
  pSVar8 = SplashActivity;
  bVar2 = *p1->a;
  pHVar9 = H2OMainActivity;
  if (bVar1) {
    pPVar4 = (*pCVar3->getPackageManager)(pCVar3);
    pCVar10 = new ComponentName(pCVar3,H2OOpaqueMainActivity);
    iVar5 = (*pPVar4->getComponentEnabledSetting)(pPVar4,pCVar10);
    if (iVar5 == 0) {
      if (bVar2 != false) {
        pRVar6 = (*pCVar3->getResources)(pCVar3);
        bVar2 = (*pRVar6->getBoolean)(pRVar6,0x7f020001);
        if (bVar2) goto LAB_50009588;
      }
    }
    else if (iVar5 == 1) goto LAB_50009588;
    pCVar10 = new ComponentName(pCVar3,pHVar9);
  }
  else {
    pPVar4 = (*pCVar3->getPackageManager)(pCVar3);
    pCVar10 = new ComponentName(pCVar3,pHVar9);
    iVar5 = (*pPVar4->getComponentEnabledSetting)(pPVar4,pCVar10);
    if (iVar5 == 0) {
      if (bVar2 != false) {
        pRVar6 = (*pCVar3->getResources)(pCVar3);
        bVar2 = (*pRVar6->getBoolean)(pRVar6,0x7f020002);
        if (!bVar2) goto LAB_5000958c;
      }
    }
    else if (iVar5 != 1) {
LAB_5000958c:
      pCVar10 = new ComponentName(pCVar3,pSVar8);
      goto LAB_50009598;
    }
LAB_50009588:
    pCVar10 = (ComponentName *)0x0;
  }
LAB_50009598:
  if (pCVar10 != (ComponentName *)0x0) {
    pCVar3 = (*this->getApplicationContext)(this);
    pIVar7 = (*this->getIntent)(this);
    (*b_a)(pCVar3,pIVar7,*p1->j,-1,pCVar10);
    return;
  }
  if (!bVar1) {
    (*d_a)(this,p1,(Bundle *)0x0,0x10000000,false);
    return;
  }
  pCVar3 = (*this->getApplicationContext)(this);
  pIVar7 = (*this->getIntent)(this);
  pCVar10 = new ComponentName(pCVar3,pSVar8);
  (*b_a)(pCVar3,pIVar7,*p1->j,*p1->h,pCVar10);
  return;
}



// === SplashActivity @ 50009608 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 3
   Method Incoming Size: 1
   Method Outgoing Size: 2
   Method Debug Info Offset: 0x6eb2
   Method ID Offset: 0x280c
    */

void org::chromium::webapk::shell_apk::h2o::SplashActivity::SplashActivity(SplashActivity *this)

{
  p *ref;
  q *ref_00;
  
  (*this-><init>)(this);
  ref_00 = new q(this);
  ref = new p(ref_00);
  *this->f = ref;
  return;
}



// === a @ 50009638 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( [B
    Landroid/graphics/Bitmap$CompressFormat;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 7
   Method Incoming Size: 3
   Method Outgoing Size: 5
   Method Debug Info Offset: 0x6ebc
   Method ID Offset: 0x2814
    */

void org::chromium::webapk::shell_apk::h2o::SplashActivity::a
               (SplashActivity *this,byte *p1,Bitmap_CompressFormat *p2)

{
  int iVar1;
  int iVar2;
  SharedPreferences *ref;
  SharedPreferences_Editor *ref_00;
  View *local_0;
  StringBuilder *ref_01;
  e *peVar3;
  String *pSVar4;
  Bundle *ref_02;
  
  local_0 = *this->b;
  iVar1 = (*local_0->getWidth)(local_0);
  local_0 = *this->b;
  iVar2 = (*local_0->getHeight)(local_0);
  ref = (*B_a)(this);
  ref_00 = (*ref->edit)(ref);
  (*ref_00->putInt)(ref_00,(String *)"org.chromium.webapk.shell_apk.splash_width",iVar1);
  (*ref_00->putInt)(ref_00,(String *)"org.chromium.webapk.shell_apk.splash_height",iVar2);
  (*ref_00->apply)(ref_00);
  *SplashContentProvider_b = p2;
  (*SplashContentProvider_a)(p1);
  peVar3 = *this->d;
  pSVar4 = *peVar3->e;
  ref_01 = new StringBuilder((String *)"WebAPK Launch URL: ");
  (*ref_01->append)(ref_01,pSVar4);
  pSVar4 = (*ref_01->toString)(ref_01);
  (*Log_v)((String *)"cr_H2OLauncher",pSVar4);
  ref_02 = new Bundle();
  (*ref_02->putBoolean)
            (ref_02,(String *)"org.chromium.chrome.browser.webapk.splash_provided_by_webapk",true);
  (*d_a)(this,peVar3,ref_02,0x10000,true);
  *this->d = (e *)0x0;
  return;
}



// === onActivityResult @ 500096f0 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( I
    I
    Landroid/content/Intent;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 4
   Method Incoming Size: 4
   Method Outgoing Size: 0
   Method Debug Info Offset: 0x6ee7
   Method ID Offset: 0x281c
    */

void org::chromium::webapk::shell_apk::h2o::SplashActivity::onActivityResult
               (SplashActivity *this,int p1,int p2,Intent *p3)

{
  if ((*this->e != 2) && (p2 == 0)) {
    *this->e = 1;
  }
  return;
}



// === onCreate @ 50009718 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/os/Bundle;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 8
   Method Incoming Size: 2
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x6ef4
   Method ID Offset: 0x2824
    */

void org::chromium::webapk::shell_apk::h2o::SplashActivity::onCreate
               (SplashActivity *this,Bundle *p1)

{
  boolean bVar1;
  Bundle *ref;
  Window *pWVar2;
  View *pVVar3;
  uint uVar4;
  Display *ref_00;
  int iVar5;
  FrameLayout *pFVar6;
  ViewTreeObserver *ref_01;
  int iVar7;
  Object *pOVar8;
  List *ref_02;
  Iterator *ref_03;
  ActivityManager_RecentTaskInfo *pAVar9;
  ComponentName *pCVar10;
  long lVar11;
  long lVar12;
  String *pSVar13;
  ViewTreeObserver_OnGlobalLayoutListener *ref_04;
  int iVar14;
  n *ref_05;
  ComponentName *ref_06;
  o *ref_07;
  
  (*super->onCreate)(this,p1);
  ref = (*D_d)(this);
  pSVar13 = (String *)"org.chromium.webapk.shell_apk.themeColor";
  lVar11 = (*z_a)(ref,pSVar13,-1);
  lVar12 = (*z_a)(ref,pSVar13,-0x1000000);
  lVar12 = (*z_a)(ref,(String *)"org.chromium.webapk.shell_apk.darkThemeColor",(long)(int)lVar12);
  bVar1 = (*D_b)(this);
  iVar7 = (int)lVar11;
  if (bVar1) {
    iVar7 = (int)lVar12;
  }
  pWVar2 = (*this->getWindow)(this);
  (*pWVar2->addFlags)(pWVar2,-0x80000000);
  bVar1 = (*D_c)(this);
  if (bVar1) {
    (*pWVar2->setStatusBarColor)(pWVar2,-0x1000000);
  }
  else {
    (*pWVar2->setStatusBarColor)(pWVar2,iVar7);
  }
  bVar1 = (*D_e)((int)lVar11);
  pWVar2 = (*this->getWindow)(this);
  pVVar3 = (*pWVar2->getDecorView)(pWVar2);
  pVVar3 = (*pVVar3->getRootView)(pVVar3);
  uVar4 = (*pVVar3->getSystemUiVisibility)(pVVar3);
  if ((bVar1) || (bVar1 = (*D_c)(this), bVar1)) {
    uVar4 = uVar4 & 0xffffdfff;
  }
  else {
    uVar4 = uVar4 | 0x2000;
  }
  (*pVVar3->setSystemUiVisibility)(pVVar3,uVar4);
  pSVar13 = (*ref->getString)(ref,(String *)"org.chromium.webapk.shell_apk.orientation");
  if ((pSVar13 == (String *)0x0) ||
     (bVar1 = (*pSVar13->equals)(pSVar13,(Object *)"natural"), !bVar1)) {
    iVar14 = -1;
  }
  else {
    pOVar8 = (*this->getSystemService)(this,(String *)"window");
    checkCast(pOVar8,WindowManager);
    ref_00 = (*pOVar8->getDefaultDisplay)(pOVar8);
    iVar7 = (*ref_00->getRotation)(ref_00);
    iVar14 = 0;
    if ((iVar7 == 0) || (iVar7 == 2)) {
      iVar7 = (*ref_00->getHeight)(ref_00);
      iVar5 = (*ref_00->getWidth)(ref_00);
      if (iVar7 < iVar5) goto LAB_50009864;
    }
    else {
      iVar7 = (*ref_00->getHeight)(ref_00);
      iVar5 = (*ref_00->getWidth)(ref_00);
      if (iVar5 <= iVar7) goto LAB_50009864;
    }
    iVar14 = 1;
  }
LAB_50009864:
  if (iVar14 != -1) {
    (*this->setRequestedOrientation)(this,iVar14);
  }
  if (*Build_VERSION_SDK_INT < 0x1f) {
    pFVar6 = (*w_a)(this);
    *this->b = pFVar6;
  }
  else {
    pVVar3 = (*x_a)(this);
    *this->b = pVVar3;
  }
  pVVar3 = *this->b;
  ref_01 = (*pVVar3->getViewTreeObserver)(pVVar3);
  ref_04 = new ViewTreeObserver$OnGlobalLayoutListener(this);
  (*ref_01->addOnGlobalLayoutListener)(ref_01,ref_04);
  (*this->setContentView)(this,*this->b);
  lVar11 = (*SystemClock_elapsedRealtime)();
  ref_06 = new ComponentName(this,SplashActivity);
  iVar7 = (*this->getTaskId)(this);
  pOVar8 = (*this->getSystemService)(this,(String *)"activity");
  checkCast(pOVar8,ActivityManager);
  ref_02 = (*pOVar8->getAppTasks)(pOVar8);
  ref_03 = (*ref_02->iterator)(ref_02);
  do {
    bVar1 = (*ref_03->hasNext)(ref_03);
    if (!bVar1) {
      pCVar10 = (Object *)0x0;
      goto LAB_50009930;
    }
    pOVar8 = (*ref_03->next)(ref_03);
    checkCast(pOVar8,ActivityManager_AppTask);
    pAVar9 = (*pOVar8->getTaskInfo)(pOVar8);
  } while ((pAVar9 == (ActivityManager_RecentTaskInfo *)0x0) || (*pAVar9->id != iVar7));
  pCVar10 = (*C_a)(pAVar9);
LAB_50009930:
  bVar1 = (*ref_06->equals)(ref_06,pCVar10);
  if (bVar1) {
    ref_07 = new o(this);
    ref_05 = new n(this,lVar11);
    (*ref_07->a)(ref_07,ref_05);
  }
  return;
}



// === onDestroy @ 5000997c ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 4
   Method Incoming Size: 1
   Method Outgoing Size: 2
   Method Debug Info Offset: 0x6f8d
   Method ID Offset: 0x282c
    */

void org::chromium::webapk::shell_apk::h2o::SplashActivity::onDestroy(SplashActivity *this)

{
  AsyncTask *ref;
  
  (*SplashContentProvider_a)((byte *)0x0);
  ref = *this->a;
  if (ref != (AsyncTask *)0x0) {
    (*ref->cancel)(ref,false);
    *this->a = (AsyncTask *)0x0;
  }
  (*super->onDestroy)(this);
  return;
}



// === onNewIntent @ 500099b0 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/content/Intent;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 5
   Method Incoming Size: 2
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x6f99
   Method ID Offset: 0x2834
    */

void org::chromium::webapk::shell_apk::h2o::SplashActivity::onNewIntent
               (SplashActivity *this,Intent *p1)

{
  n *ref;
  p *ppVar1;
  o *ref_00;
  
  (*super->onNewIntent)(this,p1);
  (*this->setIntent)(this,p1);
  *this->e = 2;
  ppVar1 = *this->f;
  *ppVar1->e = false;
  *ppVar1->d = false;
  *ppVar1->c = false;
  ref_00 = new o(this);
  ref = new n(this,-1);
  (*ref_00->a)(ref_00,ref);
  return;
}



// === onResume @ 50009a04 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/app/Activity;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 3
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6fad
   Method ID Offset: 0x283c
    */

void org::chromium::webapk::shell_apk::h2o::SplashActivity::onResume(SplashActivity *this)

{
  p *ref;
  
  (*super->onResume)(this);
  if (*this->e == 1) {
    (*this->finish)(this);
    return;
  }
  *this->e = 0;
  ref = *this->f;
  *ref->c = true;
  (*ref->a)(ref);
  return;
}



// === SplashContentProvider @ 50009a44 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_STATIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 1
   Method Incoming Size: 0
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6fbc
   Method ID Offset: 0x2844
    */

void org::chromium::webapk::shell_apk::h2o::SplashContentProvider::SplashContentProvider(void)

{
  AtomicReference *local_0;
  
  local_0 = new AtomicReference();
  *SplashContentProvider_c = local_0;
  return;
}



// === SplashContentProvider @ 50009a64 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 1
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6c24
   Method ID Offset: 0x284c
    */

void org::chromium::webapk::shell_apk::h2o::SplashContentProvider::SplashContentProvider
               (SplashContentProvider *this)

{
  (*this-><init>)(this);
  return;
}



// === a @ 50009a7c ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: [B( [B
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 6
   Method Incoming Size: 1
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x6fc3
   Method ID Offset: 0x2854
    */

byte * org::chromium::webapk::shell_apk::h2o::SplashContentProvider::a(byte *p0)

{
  Object *pOVar1;
  Runnable *ref;
  Handler *pHVar2;
  AtomicReference *ref_00;
  
  if (p0 == (byte *)0x0) {
    pOVar1 = (Object *)0x0;
  }
  else {
    ref = new Runnable();
    pOVar1 = new v();
    *pOVar1->a = p0;
    pHVar2 = new Handler();
    *pOVar1->b = pHVar2;
    (*pHVar2->postDelayed)(pHVar2,ref,10000);
  }
  ref_00 = *SplashContentProvider_c;
  pOVar1 = (*ref_00->getAndSet)(ref_00,pOVar1);
  checkCast(pOVar1,v);
  if (pOVar1 == (Object *)0x0) {
    return (byte *)0x0;
  }
  pHVar2 = *pOVar1->b;
  (*pHVar2->removeCallbacksAndMessages)(pHVar2,(Object *)0x0);
  return *pOVar1->a;
}



// === b @ 50009aec ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/graphics/Bitmap;(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 7
   Method Incoming Size: 1
   Method Outgoing Size: 5
   Method Debug Info Offset: 0x6fdf
   Method ID Offset: 0x285c
    */

Bitmap * org::chromium::webapk::shell_apk::h2o::SplashContentProvider::b
                   (SplashContentProvider *this)

{
  Context *pCVar1;
  SharedPreferences *ref;
  int iVar2;
  int iVar3;
  View *ref_00;
  int iVar4;
  int iVar5;
  float fVar6;
  Bitmap *pBVar7;
  Canvas *ref_01;
  Matrix *ref_02;
  
  pCVar1 = (*this->getContext)(this);
  pCVar1 = (*pCVar1->getApplicationContext)(pCVar1);
  ref = (*B_a)(pCVar1);
  iVar2 = (*ref->getInt)(ref,(String *)"org.chromium.webapk.shell_apk.splash_width",-1);
  iVar3 = (*ref->getInt)(ref,(String *)"org.chromium.webapk.shell_apk.splash_height",-1);
  if ((0 < iVar2) && (0 < iVar3)) {
    if (*Build_VERSION_SDK_INT < 0x1f) {
      ref_00 = (*w_a)(pCVar1);
    }
    else {
      ref_00 = (*x_a)(pCVar1);
    }
    iVar4 = (*View_MeasureSpec_makeMeasureSpec)(iVar2,0x40000000);
    iVar5 = (*View_MeasureSpec_makeMeasureSpec)(iVar3,0x40000000);
    (*ref_00->measure)(ref_00,iVar4,iVar5);
    (*ref_00->layout)(ref_00,0,0,iVar2,iVar3);
    iVar2 = (*ref_00->getWidth)(ref_00);
    iVar3 = (*ref_00->getHeight)(ref_00);
    if ((iVar2 != 0) && (iVar3 != 0)) {
      fVar6 = (*Math_min)(1.0,12582912.0 / (float)(iVar2 * 4 * iVar3));
      iVar2 = (*Math_round)((float)iVar2 * fVar6);
      iVar3 = (*Math_round)((float)iVar3 * fVar6);
      ref_02 = new Matrix();
      (*ref_02->postScale)(ref_02,fVar6,fVar6);
      pBVar7 = (*Bitmap_createBitmap)(iVar2,iVar3,*Bitmap_Config_ARGB_8888);
      ref_01 = new Canvas(pBVar7);
      (*ref_01->concat)(ref_01,ref_02);
      (*ref_00->draw)(ref_00,ref_01);
      return pBVar7;
    }
  }
  return (Bitmap *)0x0;
}



// === delete @ 50009c00 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: I( Landroid/net/Uri;
    Ljava/lang/String;
    [Ljava/lang/String;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 4
   Method Incoming Size: 4
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x7027
   Method ID Offset: 0x2864
    */

int org::chromium::webapk::shell_apk::h2o::SplashContentProvider::delete
              (SplashContentProvider *this,Uri *p1,String *p2,String **p3)

{
  int iVar1;
  UnsupportedOperationException *ref;
  
  ref = (UnsupportedOperationException *)new(UnsupportedOperationException);
  iVar1 = (*ref-><init>)(ref);
  throwException(ref);
  return iVar1;
}



// === getType @ 50009c1c ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Ljava/lang/String;( Landroid/net/Uri;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 5
   Method Incoming Size: 2
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x7030
   Method ID Offset: 0x286c
    */

String * org::chromium::webapk::shell_apk::h2o::SplashContentProvider::getType
                   (SplashContentProvider *this,Uri *p1)

{
  boolean bVar1;
  String *ref;
  Context *pCVar2;
  SharedPreferences *ref_00;
  int iVar3;
  int iVar4;
  Bitmap_CompressFormat *pBVar5;
  
  if (p1 != (Uri *)0x0) {
    ref = (*p1->toString)(p1);
    bVar1 = (*ref->equals)(ref,*this->a);
    if (bVar1) {
      if (*SplashContentProvider_b == (Bitmap_CompressFormat *)0x0) {
        pCVar2 = (*this->getContext)(this);
        pCVar2 = (*pCVar2->getApplicationContext)(pCVar2);
        ref_00 = (*B_a)(pCVar2);
        iVar3 = (*ref_00->getInt)(ref_00,(String *)"org.chromium.webapk.shell_apk.splash_width",-1);
        iVar4 = (*ref_00->getInt)(ref_00,(String *)"org.chromium.webapk.shell_apk.splash_height",-1)
        ;
        if (iVar4 * iVar3 < 0x100001) {
          pBVar5 = *Bitmap_CompressFormat_PNG;
        }
        else {
          pBVar5 = *Bitmap_CompressFormat_JPEG;
        }
        *SplashContentProvider_b = pBVar5;
      }
      if (*SplashContentProvider_b == *Bitmap_CompressFormat_PNG) {
        return (String *)"image/png";
      }
      if (*SplashContentProvider_b == *Bitmap_CompressFormat_JPEG) {
        return (String *)"image/jpeg";
      }
    }
  }
  return (String *)0x0;
}



// === insert @ 50009cc4 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/net/Uri;( Landroid/net/Uri;
    Landroid/content/ContentValues;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 3
   Method Incoming Size: 3
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x705d
   Method ID Offset: 0x2874
    */

Uri * org::chromium::webapk::shell_apk::h2o::SplashContentProvider::insert
                (SplashContentProvider *this,Uri *p1,ContentValues *p2)

{
  Uri *pUVar1;
  UnsupportedOperationException *ref;
  
  ref = (UnsupportedOperationException *)new(UnsupportedOperationException);
  pUVar1 = (Uri *)(*ref-><init>)(ref);
  throwException(ref);
  return pUVar1;
}



// === onCreate @ 50009ce0 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Z(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 4
   Method Incoming Size: 1
   Method Outgoing Size: 2
   Method Debug Info Offset: 0x7065
   Method ID Offset: 0x287c
    */

boolean org::chromium::webapk::shell_apk::h2o::SplashContentProvider::onCreate
                  (SplashContentProvider *this)

{
  Context *ref;
  String *pSVar1;
  StringBuilder *pSVar2;
  
  ref = (*this->getContext)(this);
  pSVar1 = (*ref->getPackageName)(ref);
  pSVar2 = new StringBuilder();
  (*pSVar2->append)(pSVar2,pSVar1);
  (*pSVar2->append)(pSVar2,(String *)".SplashContentProvider");
  pSVar1 = (*pSVar2->toString)(pSVar2);
  pSVar2 = new StringBuilder((String *)"content://");
  (*pSVar2->append)(pSVar2,pSVar1);
  (*pSVar2->append)(pSVar2,(String *)"/cached_splash_image");
  pSVar1 = (*pSVar2->toString)(pSVar2);
  *this->a = pSVar1;
  return true;
}



// === openFile @ 50009d50 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/os/ParcelFileDescriptor;( Landroid/net/Uri;
    Ljava/lang/String;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 9
   Method Incoming Size: 3
   Method Outgoing Size: 6
   Method Debug Info Offset: 0x707e
   Method ID Offset: 0x2884
    */

ParcelFileDescriptor *
org::chromium::webapk::shell_apk::h2o::SplashContentProvider::openFile
          (SplashContentProvider *this,Uri *p1,String *p2)

{
  boolean bVar1;
  String *ref;
  ParcelFileDescriptor *pPVar2;
  
  if (p1 != (Uri *)0x0) {
    ref = (*p1->toString)(p1);
    bVar1 = (*ref->equals)(ref,*this->a);
    if (bVar1) {
      pPVar2 = (*this->openPipeHelper)
                         (this,(Uri *)0x0,(String *)0x0,(Bundle *)0x0,(Object *)0x0,this);
      return pPVar2;
    }
  }
  return (ParcelFileDescriptor *)0x0;
}



// === query @ 50009d98 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/database/Cursor;( Landroid/net/Uri;
    [Ljava/lang/String;
    Ljava/lang/String;
    [Ljava/lang/String;
    Ljava/lang/String;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 6
   Method Incoming Size: 6
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x7095
   Method ID Offset: 0x288c
    */

Cursor * org::chromium::webapk::shell_apk::h2o::SplashContentProvider::query
                   (SplashContentProvider *this,Uri *p1,String **p2,String *p3,String **p4,
                   String *p5)

{
  Cursor *pCVar1;
  UnsupportedOperationException *ref;
  
  ref = (UnsupportedOperationException *)new(UnsupportedOperationException);
  pCVar1 = (Cursor *)(*ref-><init>)(ref);
  throwException(ref);
  return pCVar1;
}



// === update @ 50009db4 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: I( Landroid/net/Uri;
    Landroid/content/ContentValues;
    Ljava/lang/String;
    [Ljava/lang/String;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 5
   Method Incoming Size: 5
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x70a0
   Method ID Offset: 0x2894
    */

int org::chromium::webapk::shell_apk::h2o::SplashContentProvider::update
              (SplashContentProvider *this,Uri *p1,ContentValues *p2,String *p3,String **p4)

{
  int iVar1;
  UnsupportedOperationException *ref;
  
  ref = (UnsupportedOperationException *)new(UnsupportedOperationException);
  iVar1 = (*ref-><init>)(ref);
  throwException(ref);
  return iVar1;
}



// === writeDataToPipe @ 50009dd0 ===

/* Class: Lorg/chromium/webapk/shell_apk/h2o/SplashContentProvider;
   Class Access Flags:
    ACC_PUBLIC
   
   Superclass: Landroid/content/ContentProvider;
   Interfaces: 
    Landroid/content/ContentProvider$PipeDataWriter;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Landroid/os/ParcelFileDescriptor;
    Landroid/net/Uri;
    Ljava/lang/String;
    Landroid/os/Bundle;
    Ljava/lang/Object;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 6
   Method Incoming Size: 6
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x70aa
   Method ID Offset: 0x289c
    */

void org::chromium::webapk::shell_apk::h2o::SplashContentProvider::writeDataToPipe
               (SplashContentProvider *this,ParcelFileDescriptor *p1,Uri *p2,String *p3,Bundle *p4,
               Object *p5)

{
  FileDescriptor *pFVar1;
  byte *pbVar2;
  Bitmap *ref;
  int iVar3;
  int iVar4;
  OutputStream *ref_00;
  Bitmap_CompressFormat *pBVar5;
  
  checkCast(p5,Void);
  pFVar1 = (*p1->getFileDescriptor)(p1);
  ref_00 = new OutputStream(pFVar1);
  pbVar2 = (*SplashContentProvider_a)((byte *)0x0);
  if (pbVar2 == (byte *)0x0) {
    ref = (*this->b)(this);
    if (ref != (Bitmap *)0x0) {
      iVar3 = (*ref->getWidth)(ref);
      iVar4 = (*ref->getHeight)(ref);
      if (iVar3 * iVar4 < 0x100001) {
        pBVar5 = *Bitmap_CompressFormat_PNG;
      }
      else {
        pBVar5 = *Bitmap_CompressFormat_JPEG;
      }
      *SplashContentProvider_b = pBVar5;
      (*ref->compress)(ref,pBVar5,100,ref_00);
    }
  }
  else {
    (*ref_00->write)(ref_00,pbVar2);
  }
  (*ref_00->flush)(ref_00);
  (*ref_00->close)(ref_00);
  return;
}



// === p @ 50009ea4 ===

/* Class: Lp;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Lq;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 2
   Method Incoming Size: 2
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x70bf
   Method ID Offset: 0x28a4
    */

void p::p(p *this,q *p1)

{
  (*this-><init>)(this);
  *this->a = p1;
  return;
}



// === a @ 50009ec0 ===

/* Class: Lp;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 2
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x70c6
   Method ID Offset: 0x28ac
    */

void p::a(p *this)

{
  q *ref;
  
  if ((((*this->d != false) && (*this->b != false)) && (*this->c != false)) && (*this->e == false))
  {
    *this->e = true;
    ref = *this->a;
    (*ref->run)(ref);
  }
  return;
}



// === q @ 50009f04 ===

/* Class: Lq;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
    ACC_SYNTHETIC
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Ljava/lang/Runnable;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_SYNTHETIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 2
   Method Incoming Size: 2
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x70bf
   Method ID Offset: 0x28b4
    */

void q::q(q *this,SplashActivity *p1)

{
  (*this-><init>)(this);
  *this->a = p1;
  return;
}



// === run @ 50009f20 ===

/* Class: Lq;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
    ACC_SYNTHETIC
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Ljava/lang/Runnable;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 5
   Method Incoming Size: 1
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x70d7
   Method ID Offset: 0x28bc
    */

void q::run(q *this)

{
  AsyncTask *pAVar1;
  SplashActivity *local_0;
  t *ref;
  Object **ppOVar2;
  
  local_0 = *this->a;
  if (*local_0->c == (Bitmap *)0x0) {
    (*local_0->a)(local_0,(byte *)0x0,*Bitmap_CompressFormat_PNG);
    return;
  }
  ref = new t(local_0);
  ppOVar2 = (Object **)(new undefined4[0]);
  pAVar1 = (*ref->executeOnExecutor)(ref,*AsyncTask_THREAD_POOL_EXECUTOR,ppOVar2);
  *local_0->a = pAVar1;
  return;
}



// === r @ 50009f6c ===

/* Class: Lr;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Ln;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
    J
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 4
   Method Incoming Size: 4
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6b7d
   Method ID Offset: 0x28c4
    */

void r::r(r *this,SplashActivity *p1,long p2)

{
  (*this-><init>)(this);
  *this->a = p2;
  *this->b = p1;
  return;
}



// === a @ 50009f8c ===

/* Class: Lr;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Ln;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Lf;
    Z
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 11
   Method Incoming Size: 3
   Method Outgoing Size: 8
   Method Debug Info Offset: 0x70ea
   Method ID Offset: 0x28cc
    */

void r::a(r *this,f *p1,boolean p2)

{
  boolean bVar1;
  Intent *pIVar2;
  e *peVar3;
  Context *ref;
  SharedPreferences *ref_00;
  SharedPreferences_Editor *ref_01;
  PackageManager *ref_02;
  Context *local_0;
  ComponentName *ref_03;
  ComponentName *ref_04;
  p *ref_05;
  
  local_0 = *this->b;
  if (p1 == (f *)0x0) {
    (*local_0->finish)(local_0);
    return;
  }
  pIVar2 = (*local_0->getIntent)(local_0);
  peVar3 = (*e_a)(local_0,pIVar2,p1,p2,-1,*this->a);
  if (peVar3 == (e *)0x0) {
    (*local_0->finish)(local_0);
    return;
  }
  ref = (*local_0->getApplicationContext)(local_0);
  bVar1 = (*g_b)(peVar3);
  if (!bVar1) {
    (*d_a)(local_0,peVar3,(Bundle *)0x0,0x10000000,false);
    ref_04 = new ComponentName(ref,H2OMainActivity);
    ref_03 = new ComponentName(ref,H2OOpaqueMainActivity);
    ref_00 = (*B_a)(ref);
    ref_01 = (*ref_00->edit)(ref_00);
    (*ref_01->commit)(ref_01);
    ref_02 = (*ref->getPackageManager)(ref);
    (*ref_02->setComponentEnabledSetting)(ref_02,ref_04,1,1);
    (*ref_02->setComponentEnabledSetting)(ref_02,ref_03,2,0);
    (*local_0->finish)(local_0);
    return;
  }
  *local_0->d = peVar3;
  ref_05 = *local_0->f;
  *ref_05->d = true;
  (*ref_05->a)(ref_05);
  return;
}



// === s @ 5000a060 ===

/* Class: Ls;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 2
   Method Incoming Size: 2
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x70bf
   Method ID Offset: 0x28d4
    */

void s::s(s *this,SplashActivity *p1)

{
  (*this-><init>)(this);
  *this->a = p1;
  return;
}



// === onGlobalLayout @ 5000a07c ===

/* Class: Ls;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 7
   Method Incoming Size: 1
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x7120
   Method ID Offset: 0x28dc
    */

void s::onGlobalLayout(s *this)

{
  int iVar1;
  ViewTreeObserver *ref;
  int iVar2;
  float fVar3;
  SplashActivity *local_0;
  p *ref_00;
  View *pVVar4;
  Bitmap *pBVar5;
  Canvas *ref_01;
  Matrix *ref_02;
  
  local_0 = *this->a;
  pVVar4 = *local_0->b;
  iVar1 = (*pVVar4->getWidth)(pVVar4);
  if ((iVar1 != 0) && (pVVar4 = *local_0->b, iVar1 = (*pVVar4->getHeight)(pVVar4), iVar1 != 0)) {
    pVVar4 = *local_0->b;
    ref = (*pVVar4->getViewTreeObserver)(pVVar4);
    (*ref->removeOnGlobalLayoutListener)(ref,this);
    pVVar4 = *local_0->b;
    iVar1 = (*pVVar4->getWidth)(pVVar4);
    iVar2 = (*pVVar4->getHeight)(pVVar4);
    if ((iVar1 == 0) || (iVar2 == 0)) {
      pBVar5 = (Bitmap *)0x0;
    }
    else {
      fVar3 = (*Math_min)(1.0,12582912.0 / (float)(iVar1 * 4 * iVar2));
      iVar1 = (*Math_round)((float)iVar1 * fVar3);
      iVar2 = (*Math_round)((float)iVar2 * fVar3);
      ref_02 = new Matrix();
      (*ref_02->postScale)(ref_02,fVar3,fVar3);
      pBVar5 = (*Bitmap_createBitmap)(iVar1,iVar2,*Bitmap_Config_ARGB_8888);
      ref_01 = new Canvas(pBVar5);
      (*ref_01->concat)(ref_01,ref_02);
      (*pVVar4->draw)(pVVar4,ref_01);
    }
    *local_0->c = pBVar5;
    ref_00 = *local_0->f;
    *ref_00->b = true;
    (*ref_00->a)(ref_00);
  }
  return;
}



// === t @ 5000a164 ===

/* Class: Lt;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Landroid/os/AsyncTask;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Lorg/chromium/webapk/shell_apk/h2o/SplashActivity;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 2
   Method Incoming Size: 2
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x715c
   Method ID Offset: 0x28e4
    */

void t::t(t *this,SplashActivity *p1)

{
  *this->a = p1;
  (*this-><init>)(this);
  return;
}



// === doInBackground @ 5000a180 ===

/* Class: Lt;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Landroid/os/AsyncTask;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Ljava/lang/Object;( [Ljava/lang/Object;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 5
   Method Incoming Size: 2
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x7163
   Method ID Offset: 0x28ec
    */

Object * t::doInBackground(t *this,Object **p1)

{
  int iVar1;
  int iVar2;
  Object *pOVar3;
  Pair *pPVar4;
  OutputStream *ref;
  Bitmap *pBVar5;
  Bitmap_CompressFormat *pBVar6;
  SplashActivity *pSVar7;
  
  checkCast(p1,Void__);
  pSVar7 = *this->a;
  ref = new OutputStream();
  pBVar5 = *pSVar7->c;
  iVar1 = (*pBVar5->getWidth)(pBVar5);
  pBVar5 = *pSVar7->c;
  iVar2 = (*pBVar5->getHeight)(pBVar5);
  if (iVar1 * iVar2 < 0x100001) {
    pBVar6 = *Bitmap_CompressFormat_PNG;
  }
  else {
    pBVar6 = *Bitmap_CompressFormat_JPEG;
  }
  pBVar5 = *pSVar7->c;
  (*pBVar5->compress)(pBVar5,pBVar6,100,ref);
  pOVar3 = (Object *)(*ref->toByteArray)(ref);
  pPVar4 = (*Pair_create)(pOVar3,pBVar6);
  (*ref->close)(ref);
  return pPVar4;
}



// === onPostExecute @ 5000a23c ===

/* Class: Lt;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Landroid/os/AsyncTask;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Ljava/lang/Object;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 4
   Method Incoming Size: 2
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x7188
   Method ID Offset: 0x28f4
    */

void t::onPostExecute(t *this,Object *p1)

{
  SplashActivity *ref;
  Object *pOVar1;
  Bitmap_CompressFormat *pBVar2;
  
  checkCast(p1,Pair);
  ref = *this->a;
  pOVar1 = (Object *)0x0;
  *ref->a = (AsyncTask *)0x0;
  if (p1 == (Object *)0x0) {
    pBVar2 = *Bitmap_CompressFormat_PNG;
  }
  else {
    pOVar1 = *p1->first;
    checkCast(pOVar1,sbyte);
    pBVar2 = *p1->second;
    checkCast(pBVar2,Bitmap_CompressFormat);
  }
  (*ref->a)(ref,(byte *)pOVar1,pBVar2);
  return;
}



// === run @ 5000a284 ===

/* Class: Lu;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
    ACC_SYNTHETIC
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Ljava/lang/Runnable;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V(  )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 2
   Method Incoming Size: 1
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x719b
   Method ID Offset: 0x28fc
    */

void u::run(u *this)

{
  (*SplashContentProvider_a)((byte *)0x0);
  return;
}



// === a @ 5000a2a0 ===

/* Class: Lw;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/widget/FrameLayout;( Landroid/content/Context;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 12
   Method Incoming Size: 1
   Method Outgoing Size: 4
   Method Debug Info Offset: 0x71a1
   Method ID Offset: 0x2904
    */

FrameLayout * w::a(Context *p0)

{
  boolean bVar1;
  boolean bVar2;
  Resources *pRVar3;
  Drawable *ref;
  Bitmap *ref_00;
  int iVar4;
  Resources *ref_01;
  String *pSVar5;
  DisplayMetrics *pDVar6;
  int iVar7;
  int iVar8;
  LayoutInflater *ref_02;
  View *pVVar9;
  View *ref_03;
  Icon *pIVar10;
  ViewGroup *ref_04;
  int iVar11;
  
  pRVar3 = (*p0->getResources)(p0);
  ref = (*pRVar3->getDrawable)(pRVar3,0x7f050007,(Resources_Theme *)0x0);
  if (ref == (Drawable *)0x0) {
    ref_00 = (Bitmap *)0x0;
  }
  else {
    checkCast(ref,BitmapDrawable);
    ref_00 = (*ref->getBitmap)(ref);
  }
  bVar1 = (*D_b)(p0);
  if (bVar1) {
    iVar4 = (*pRVar3->getColor)(pRVar3,0x7f030001,(Resources_Theme *)0x0);
  }
  else {
    iVar4 = (*pRVar3->getColor)(pRVar3,0x7f030000,(Resources_Theme *)0x0);
  }
  ref_04 = new ViewGroup(p0);
  ref_01 = (*p0->getResources)(p0);
  bVar1 = (*ref_01->getBoolean)(ref_01,0x7f020000);
  pSVar5 = (*pRVar3->getString)(pRVar3,0x7f080006);
  bVar2 = (*D_e)(iVar4);
  pRVar3 = (*p0->getResources)(p0);
  iVar11 = 0x7f060003;
  if (ref_00 != (Bitmap *)0x0) {
    pDVar6 = (*pRVar3->getDisplayMetrics)(pRVar3);
    iVar7 = (*ref_00->getScaledWidth)(ref_00,pDVar6);
    iVar8 = (*ref_00->getScaledHeight)(ref_00,pDVar6);
    iVar7 = (*Math_min)(iVar7,iVar8);
    iVar8 = (*pRVar3->getDimensionPixelSize)(pRVar3,0x7f040009);
    if (iVar8 <= iVar7) {
      iVar11 = 0x7f060002;
    }
  }
  ref_02 = (*LayoutInflater_from)(p0);
  pVVar9 = (*ref_02->inflate)(ref_02,iVar11,ref_04,true);
  checkCast(pVVar9,ViewGroup);
  ref_03 = (*pVVar9->findViewById)(pVVar9,0x7f010006);
  checkCast(ref_03,TextView);
  (*ref_03->setText)(ref_03,pSVar5);
  if (bVar2) {
    pRVar3 = (*p0->getResources)(p0);
    iVar11 = (*pRVar3->getColor)(pRVar3,0x7f030007,(Resources_Theme *)0x0);
    (*ref_03->setTextColor)(ref_03,iVar11);
  }
  pVVar9 = (*pVVar9->findViewById)(pVVar9,0x7f010004);
  checkCast(pVVar9,ImageView);
  if (pVVar9 != (View *)0x0) {
    if (bVar1) {
      pIVar10 = (*Icon_createWithAdaptiveBitmap)(ref_00);
      (*pVVar9->setImageIcon)(pVVar9,pIVar10);
    }
    else {
      (*pVVar9->setImageBitmap)(pVVar9,ref_00);
    }
  }
  (*ref_04->setBackgroundColor)(ref_04,iVar4);
  return ref_04;
}



// === a @ 5000a428 ===

/* Class: Lx;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: Landroid/view/View;( Landroid/content/Context;
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 5
   Method Incoming Size: 1
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x71fb
   Method ID Offset: 0x290c
    */

View * x::a(Context *p0)

{
  boolean bVar1;
  LayoutInflater *ref;
  View *ref_00;
  Resources *pRVar2;
  Drawable *ref_01;
  View *ref_02;
  Icon *pIVar3;
  Bitmap *pBVar4;
  
  ref = (*LayoutInflater_from)(p0);
  pBVar4 = (Bitmap *)0x0;
  ref_00 = (*ref->inflate)(ref,0x7f060001,(ViewGroup *)0x0);
  pRVar2 = (*p0->getResources)(p0);
  bVar1 = (*pRVar2->getBoolean)(pRVar2,0x7f020000);
  if (bVar1) {
    pRVar2 = (*p0->getResources)(p0);
    ref_01 = (*pRVar2->getDrawable)(pRVar2,0x7f050007,(Resources_Theme *)0x0);
    if (ref_01 != (Drawable *)0x0) {
      checkCast(ref_01,BitmapDrawable);
      pBVar4 = (*ref_01->getBitmap)(ref_01);
    }
    ref_02 = (*ref_00->findViewById)(ref_00,0x7f010003);
    checkCast(ref_02,ImageView);
    pIVar3 = (*Icon_createWithAdaptiveBitmap)(pBVar4);
    (*ref_02->setImageIcon)(ref_02,pIVar3);
  }
  return ref_00;
}



// === y @ 5000a4cc ===

/* Class: Ly;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Ln;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Lorg/chromium/webapk/shell_apk/TransparentLauncherActivity;
    J
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_CONSTRUCTOR
   
   Method Register Size: 4
   Method Incoming Size: 4
   Method Outgoing Size: 1
   Method Debug Info Offset: 0x6b7d
   Method ID Offset: 0x2914
    */

void y::y(y *this,TransparentLauncherActivity *p1,long p2)

{
  (*this-><init>)(this);
  *this->a = p2;
  *this->b = p1;
  return;
}



// === a @ 5000a4ec ===

/* Class: Ly;
   Class Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Superclass: Ljava/lang/Object;
   Interfaces: 
    Ln;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: V( Lf;
    Z
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_FINAL
   
   Method Register Size: 11
   Method Incoming Size: 3
   Method Outgoing Size: 8
   Method Debug Info Offset: 0x721e
   Method ID Offset: 0x291c
    */

void y::a(y *this,f *p1,boolean p2)

{
  Intent *pIVar1;
  e *peVar2;
  Context *local_0;
  
  local_0 = *this->b;
  if (p1 == (f *)0x0) {
    (*local_0->finish)(local_0);
    return;
  }
  pIVar1 = (*local_0->getIntent)(local_0);
  peVar2 = (*e_a)(local_0,pIVar1,p1,p2,*this->a,-1);
  (*local_0->a)(local_0,peVar2);
  (*local_0->finish)(local_0);
  return;
}



// === a @ 5000a538 ===

/* Class: Lz;
   Class Access Flags:
    ACC_PUBLIC
    ACC_ABSTRACT
   
   Superclass: Ljava/lang/Object;
   Source File: chromium-WebApk.apk-default-1
   
   Method Signature: J( Landroid/os/Bundle;
    Ljava/lang/String;
    J
     )
   Method Access Flags:
    ACC_PUBLIC
    ACC_STATIC
   
   Method Register Size: 5
   Method Incoming Size: 4
   Method Outgoing Size: 3
   Method Debug Info Offset: 0x7232
   Method ID Offset: 0x2924
    */

long z::a(Bundle *p0,String *p1,long p2)

{
  boolean bVar1;
  String *pSVar2;
  int iVar3;
  long lVar4;
  
  pSVar2 = (*p0->getString)(p0,p1);
  if ((pSVar2 != (String *)0x0) && (bVar1 = (*pSVar2->endsWith)(pSVar2,(String *)"L"), bVar1)) {
    iVar3 = (*pSVar2->length)(pSVar2);
    pSVar2 = (*pSVar2->substring)(pSVar2,0,iVar3 + -1);
    lVar4 = (*Long_parseLong)(pSVar2);
    return lVar4;
  }
  return p2;
}



