class bounding_box{
    public:
        tensor* populate_display_region (tensor *display_area, int **view1, int **view2, int **view3, int **view4, int **view5,int **view6)
        {
            display_area -> view1 = view1;
            display_area -> view2 = view2;
            display_area -> view3 = view3;
            display_area -> view4 = view4;
            display_area -> view5 = view5;
            display_area -> view6 = view6;

            return display_area;
        }

        
};