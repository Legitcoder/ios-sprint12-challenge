//
//  MUPokemon.h
//  Pokedex
//
//  Created by Moin Uddin on 11/30/18.
//  Copyright © 2018 Moin Uddin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Pokemon)
@interface MUPokemon : NSObject

-(instancetype) initWithName:(nonnull NSString *)name pokemonUrl:(nonnull NSURL *)pokemonUrl image:(nullable UIImage *)image identifier:(nullable NSString *)identifier abilities:(nullable NSArray<NSString *>*)abilities;

-(instancetype) initWithDictionary:(NSDictionary *)dictionary;

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSURL *pokemonUrl;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray<NSString *> *abilities;

@end

NS_ASSUME_NONNULL_END
