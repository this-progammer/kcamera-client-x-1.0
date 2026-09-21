/*camera_client.h*/

#ifndef CAMERA_CLIENT_
#define CAMERA_CLIENT_

typedef struct camera_client_win_s{
    int x;
    int y;
    int w;
    int h;
    void* client;
}CAMERA_CLIENT_WIN_TAG;

/*Client_Alloc_Camera()*/
struct CAMERA_CLIENT_WIN_TAG* Client_Alloc_Camera();

/*Create_Camera_Client()*/
struct CAMERA_CLIENT_WIN_TAG* Create_Camera_Client( int x, int y, int w, int h, void* client );

#define CLIENT_ALLOC_CAMERA() Client_Alloc_Camera()
#define CREATE_CAMERA_CLIENT() Create_Camera_Client( 450, 450, 450, 450, &client() )

#endif
