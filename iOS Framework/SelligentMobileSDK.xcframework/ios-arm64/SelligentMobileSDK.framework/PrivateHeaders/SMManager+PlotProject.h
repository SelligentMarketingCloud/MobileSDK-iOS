//
//  SMManager+PlotProject.h
//  SelligentMobileLib
//
//  Created by Gilbert Schakal on 15/11/17.
//  Copyright © 2017 Selligent. All rights reserved.
//

#import "SMManager.h"

#ifdef BUILD_FOR_PLOT
#import <PlotProjects/Plot.h>

@interface SMManager (PlotProject) <PlotDelegate>

#else

@interface SMManager (PlotProject)

#endif

-(void) startPlotWithLaunchOptions:(NSDictionary*)dict;
-(void) enablePlot;
-(void) disablePlot;
-(BOOL) isPlotEnabled;

@end
