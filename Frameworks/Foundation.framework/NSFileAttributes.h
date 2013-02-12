/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDate, NSDictionary, NSMutableDictionary;

@interface NSFileAttributes : NSDictionary {
    struct stat { 
        int st_dev; 
        unsigned short st_mode; 
        unsigned short st_nlink; 
        unsigned long long st_ino; 
        unsigned int st_uid; 
        unsigned int st_gid; 
        int st_rdev; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_atimespec; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_mtimespec; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_ctimespec; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_birthtimespec; 
        long long st_size; 
        long long st_blocks; 
        int st_blksize; 
        unsigned int st_flags; 
        unsigned int st_gen; 
        int st_lspare; 
        long long st_qspare[2]; 
    struct { 
        BOOL extensionHidden; 
        NSDate *creationDate; 
        struct _fields { 
            unsigned int extensionHidden : 1; 
            unsigned int creationDate : 1; 
            unsigned int reserved : 30; 
        } validFields; 
    } catInfo;
    NSMutableDictionary *dict;
    NSDictionary *extendedAttrs;
    int fileProtectionClass;
    } statInfo;
}

+ (id)_attributesAtPath:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4;
+ (id)_attributesAtURL:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4;
+ (id)attributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
+ (id)attributesWithStat:(struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { int x_8_1_1; long x_8_1_2; } x8; struct timespec { int x_9_1_1; long x_9_1_2; } x9; struct timespec { int x_10_1_1; long x_10_1_2; } x10; struct timespec { int x_11_1_1; long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; }*)arg1;

- (unsigned int)count;
- (void)dealloc;
- (id)fileGroupOwnerAccountName;
- (unsigned int)fileGroupOwnerAccountNumber;
- (id)fileModificationDate;
- (id)fileOwnerAccountName;
- (unsigned int)fileOwnerAccountNumber;
- (unsigned int)filePosixPermissions;
- (unsigned long long)fileSize;
- (unsigned int)fileSystemFileNumber;
- (int)fileSystemNumber;
- (id)fileType;
- (unsigned int)hash;
- (BOOL)isDirectory;
- (BOOL)isEqual:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
