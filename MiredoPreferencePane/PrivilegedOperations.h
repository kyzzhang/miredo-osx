/*
    File: PrivilegedOperations.h

    Abstract: Interface to "ddnswriteconfig" setuid root tool.

    Copyright: (c) Copyright 2005 Apple Computer, Inc. All rights reserved.

    Disclaimer: IMPORTANT: This Apple software is supplied to you by Apple Computer, Inc.
    ("Apple") in consideration of your agreement to the following terms, and your
    use, installation, modification or redistribution of this Apple software
    constitutes acceptance of these terms.  If you do not agree with these terms,
    please do not use, install, modify or redistribute this Apple software.

    In consideration of your agreement to abide by the following terms, and subject
    to these terms, Apple grants you a personal, non-exclusive license, under Apple's
    copyrights in this original Apple software (the "Apple Software"), to use,
    reproduce, modify and redistribute the Apple Software, with or without
    modifications, in source and/or binary forms; provided that if you redistribute
    the Apple Software in its entirety and without modifications, you must retain
    this notice and the following text and disclaimers in all such redistributions of
    the Apple Software.  Neither the name, trademarks, service marks or logos of
    Apple Computer, Inc. may be used to endorse or promote products derived from the
    Apple Software without specific prior written permission from Apple.  Except as
    expressly stated in this notice, no other rights or licenses, express or implied,
    are granted by Apple herein, including but not limited to any patent rights that
    may be infringed by your derivative works or by other works in which the Apple
    Software may be incorporated.

    The Apple Software is provided by Apple on an "AS IS" basis.  APPLE MAKES NO
    WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION THE IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS FOR A PARTICULAR
    PURPOSE, REGARDING THE APPLE SOFTWARE OR ITS USE AND OPERATION ALONE OR IN
    COMBINATION WITH YOUR PRODUCTS.

    IN NO EVENT SHALL APPLE BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL OR
    CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
    GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
    ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION, MODIFICATION AND/OR DISTRIBUTION
    OF THE APPLE SOFTWARE, HOWEVER CAUSED AND WHETHER UNDER THEORY OF CONTRACT, TORT
    (INCLUDING NEGLIGENCE), STRICT LIABILITY OR OTHERWISE, EVEN IF APPLE HAS BEEN
    ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

    Change History (most recent first):

*/

#include <CoreServices/CoreServices.h>
#include <CoreFoundation/CoreFoundation.h>
#include <Security/Security.h>

#define	PRIV_OP_TOOL_VERS	5

#define	kToolName      "miredo-pref-tool"
#define	kToolPath      "/Library/Application Support/Miredo/" kToolName
#define	kToolInstaller "installtool"
#define kToolInstallerRights { kAuthorizationRightExecute, strlen(toolInstallerPath), toolInstallerPath, 0 }

/*
#define	SC_DYNDNS_SETUP_KEY			CFSTR("Setup:/Network/DynamicDNS")
#define	SC_DYNDNS_STATE_KEY			CFSTR("State:/Network/DynamicDNS")
#define	SC_DYNDNS_REGDOMAINS_KEY	CFSTR("RegistrationDomains")
#define	SC_DYNDNS_BROWSEDOMAINS_KEY	CFSTR("BrowseDomains")
#define	SC_DYNDNS_HOSTNAMES_KEY		CFSTR("HostNames")
#define	SC_DYNDNS_DOMAIN_KEY		CFSTR("Domain")
#define	SC_DYNDNS_KEYNAME_KEY		CFSTR("KeyName")
#define	SC_DYNDNS_SECRET_KEY		CFSTR("Secret")
#define	SC_DYNDNS_ENABLED_KEY		CFSTR("Enabled")
#define	SC_DYNDNS_STATUS_KEY		CFSTR("Status")
#define DYNDNS_KEYCHAIN_DESCRIPTION "Dynamic DNS Key"
*/

OSStatus EnsureToolInstalled(void);
OSStatus MiredoRestart(AuthorizationRef authorization);
OSStatus MiredoStop(AuthorizationRef authorization);
OSStatus MiredoStart(AuthorizationRef authorization);
OSStatus WriteMiredoConfiguration(AuthorizationRef authorization,CFDictionaryRef config);

/*
OSStatus WriteRegistrationDomain(CFDataRef domainArrayData);
OSStatus WriteBrowseDomain(CFDataRef domainArrayData);
OSStatus WriteHostname(CFDataRef domainArrayData);
OSStatus SetKeyForDomain(CFDataRef secretData);
*/