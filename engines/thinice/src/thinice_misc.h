GtkShadowType
GE_INTERNAL thinice_shadow_type (GtkStyle *style, const char *detail, GtkShadowType requested);

GE_INTERNAL void
thinice_slash_two(cairo_t *cr,
                  CairoColor *color1,
                  CairoColor *color2,
                  gint x,
                  gint y,
                  gint width,
                  gint height);

GE_INTERNAL void
thinice_slash_one(cairo_t *cr,
                  CairoColor *color1,
                  CairoColor *color2,
                  gint x,
                  gint y,
                  gint width,
                  gint height);

GE_INTERNAL void
thinice_dot(cairo_t *cr,
            CairoColor *color1,
            CairoColor *color2,
            gint x,
            gint y);

GE_INTERNAL void thinice_arrow (cairo_t *canvas,
			CairoColor *color,
			GtkArrowType arrow_type, 
                        gboolean fill,
			gint x, 
			gint y, 
			gint width, 
			gint height);

GE_INTERNAL
void thinice_draw_separator(cairo_t *cr,
                            CairoColor *dark,
                            CairoColor *light,
                            gboolean horizontal,
                            int x, int y, int width, int height);
